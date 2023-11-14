#ifndef EJERCICIO_05_GRUPAL_BRAINZONES_HPP
#define EJERCICIO_05_GRUPAL_BRAINZONES_HPP

#include "brainZone.hpp"

class ChildhoodZone : public BrainZone
{
public:
    string getFormattedMemories() override;
};

class AdolescentZone : public BrainZone
{
public:
    string getFormattedMemories() override;
};

class AdultZone : public BrainZone
{
public:
    string getFormattedMemories() override;
};

class OldZone : public BrainZone
{
public:
    string getFormattedMemories() override;
};

class SubconsciousZone : public BrainZone
{
public:
    string getFormattedMemories() override;
};

#endif //EJERCICIO_05_GRUPAL_BRAINZONES_HPP