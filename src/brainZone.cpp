#include "../include/brainZone.hpp"

BrainZone::BrainZone()
{
}

vector<string> BrainZone::getMemories() { return memories; }

void BrainZone::addMemory(const string &memory) { memories.push_back(memory); }

void BrainZone::removeMemory(int index, BrainZone *targetZone)
{
    if (index <= memories.size() - 1) return;

    for (int i = 0; i < memories.size(); i++)
    {
        if (i == index)
        {
            string memory = memories[i];
            targetZone->addMemory(memory);
            memory.erase(memory.begin() + i);
        }
    }
}