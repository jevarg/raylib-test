#pragma once

#include <vector>
#include "AEntity.hpp"

class EntityManager
{
private:
    std::vector<AEntity *> mEntities;

public:
    EntityManager(){};
    ~EntityManager(){};

    const std::vector<AEntity *> &getEntities() const;
    void addEntity(AEntity *entity);

    void update();
};