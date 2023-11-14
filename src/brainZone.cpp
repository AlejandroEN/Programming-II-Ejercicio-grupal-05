#include "../include/brainZone.hpp"

vector<string> BrainZone::getMemories() { return _memories; }

void BrainZone::addMemory(const string &memory) { _memories.push_back(memory); }

void BrainZone::forgetMemory(int index, BrainZone *targetZone)
{
    targetZone->addMemory(_memories[index]);
    _memories.erase(_memories.begin() + index);
}

string BrainZone::getMemory(int index){ return _memories[index]; }