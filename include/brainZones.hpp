#ifndef EJERCICIO_05_GRUPAL_BRAINZONES_HPP
#define EJERCICIO_05_GRUPAL_BRAINZONES_HPP

#include "brainZone.hpp"

using namespace std;

class ChildhoodZone : protected BrainZone
{
public:
    void printMemories() override;
};

class AdolescentZone : protected BrainZone
{
public:
    void printMemories() override;
};

class AdultZone : protected BrainZone
{
public:
    void printMemories() override;
};

class OldZone : protected BrainZone
{
public:
    void printMemories() override;
};

class SubconsciousZone : protected BrainZone
{
public:
    void printMemories() override;
};

#endif //EJERCICIO_05_GRUPAL_BRAINZONES_HPP