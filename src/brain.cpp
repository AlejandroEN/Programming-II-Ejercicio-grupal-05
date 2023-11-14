#include "../include/brain.hpp"

ChildhoodZone& Brain::getChildhoodZone() { return _childhoodZone; }

AdolescentZone& Brain::getAdolescentZone() { return _adolescentZone; }

AdultZone& Brain::getAdultZone() { return _adultZone; }

OldZone& Brain::getOldZone() { return _oldZone; }

string Brain::getAllFormattedMemories()
{
    string text = _childhoodZone.getFormattedMemories() + "\n" +
                  _adolescentZone.getFormattedMemories() + "\n" +
                  _adultZone.getFormattedMemories() + "\n" +
                  _oldZone.getFormattedMemories();

    return text;
}