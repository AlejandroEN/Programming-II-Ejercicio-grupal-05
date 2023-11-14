#ifndef EJERCICIO_05_GRUPAL_BRAIN_HPP
#define EJERCICIO_05_GRUPAL_BRAIN_HPP

#include "brainZones.hpp"

class Brain
{
private:
    ChildhoodZone _childhoodZone;
    AdolescentZone _adolescentZone;
    AdultZone _adultZone;
    OldZone _oldZone;

public:
    Brain();

    // Getters
    ChildhoodZone getChildhoodZone();
    AdolescentZone getAdolescentZone();
    AdultZone getAdultZone();
    OldZone getOldZone();

    // Methods
    void printAllMemories();
};

#endif //EJERCICIO_05_GRUPAL_BRAIN_HPP