cmake_minimum_required(VERSION 3.15)
project(raylib-test)

set(OpenGL_GL_PREFERENCE GLVND)
set(CMAKE_C_STANDARD 11) # Requires C11 standard

# Raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(CMAKE_BUILD_TYPE debug)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/external/raylib)
include_directories(${CMAKE_CURRENT_LIST_DIR}/external/raylib/src)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/Window.cpp
    src/Player.cpp
    src/AEntity.cpp
    src/Map.cpp
    src/Box.cpp
    src/GameManager.cpp
    src/EntityManager.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/inc)
target_link_libraries(${PROJECT_NAME} raylib)

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
