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
    SubconsciousZone _subconsciousZone;

public:
    // Getters
    ChildhoodZone& getChildhoodZone();
    AdolescentZone& getAdolescentZone();
    AdultZone& getAdultZone();
    OldZone& getOldZone();
    SubconsciousZone& getSubconsciousZone();

    // Methods
    string getAllFormattedMemories();
};

#endif //EJERCICIO_05_GRUPAL_BRAIN_HPP