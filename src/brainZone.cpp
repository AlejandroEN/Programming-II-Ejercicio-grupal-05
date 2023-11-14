#include "../include/brainZone.hpp"

vector<string> BrainZone::getMemories() { return _memories; }

void BrainZone::addMemory(const string &memory) { _memories.push_back(memory); }

void BrainZone::removeMemory(int index, BrainZone *targetZone)
{
    if (index <= _memories.size() - 1) { return; }

    for (int i = 0; i < _memories.size(); i++)
    {
        if (i == index)
        {
            string memory = _memories[i];
            targetZone->addMemory(memory);
            memory.erase(memory.begin() + i);
        }
    }
}

string BrainZone::getMemory(int index)
{
    if (index <= _memories.size() - 1) { return ""; }
    return _memories[index];
}