#include "../include/brain.hpp"

Brain::Brain() {

}

ChildhoodZone Brain::getChildhoodZone() { return childhoodZone; }

AdolescentZone Brain::getAdolescentZone() { return adolescentZone; }

AdultZone Brain::getAdultZone() { return adultZone; }

OldZone Brain::getOldZone() { return oldZone; }

void Brain::printAllMemories()
{
    childhoodZone.printMemories();
    adolescentZone.printMemories();
    adultZone.printMemories();
    oldZone.printMemories();
}