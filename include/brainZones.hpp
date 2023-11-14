#ifndef EJERCICIO_05_GRUPAL_BRAINZONES_HPP
#define EJERCICIO_05_GRUPAL_BRAINZONES_HPP

#include "brainZone.hpp"

class ChildhoodZone : public BrainZone
{
public:
    string printMemories() override;
};

class AdolescentZone : public BrainZone
{
public:
    string printMemories() override;
};

class AdultZone : public BrainZone
{
public:
    string printMemories() override;
};

class OldZone : public BrainZone
{
public:
    string printMemories() override;
};

class SubconsciousZone : public BrainZone
{
public:
    string printMemories() override;
};

#endif //EJERCICIO_05_GRUPAL_BRAINZONES_HPP