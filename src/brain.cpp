#include "../include/brain.hpp"

Brain::Brain()
{
    _childhoodZone = ChildhoodZone();
    _adolescentZone = AdolescentZone();
    _adultZone = AdultZone();
    _oldZone = OldZone();
}

ChildhoodZone Brain::getChildhoodZone() { return _childhoodZone; }

AdolescentZone Brain::getAdolescentZone() { return _adolescentZone; }

AdultZone Brain::getAdultZone() { return _adultZone; }

OldZone Brain::getOldZone() { return _oldZone; }

void Brain::printAllMemories()
{
    _childhoodZone.printMemories();
    _adolescentZone.printMemories();
    _adultZone.printMemories();
    _oldZone.printMemories();
}