#ifndef EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP
#define EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP

#include <vector>
#include <string>

using namespace std;

class BrainZone
{
private:
    vector<string> memories;

public:
    BrainZone();

    // Getters
    vector<string> getMemories;

    // Methods
    void addMemory(string memory);
    void removeMemory(signed int index, BrainZone *targetZone);
    virtual void printMemories() = 0;
};

#endif //EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP