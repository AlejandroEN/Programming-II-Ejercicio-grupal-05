#ifndef EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP
#define EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BrainZone {
protected:
    vector<string> memories;

public:
    BrainZone();

    // Getters
    vector<string> getMemories();

    // Methods
    void addMemory(const string &memory);
    void removeMemory(signed int index, BrainZone *targetZone);
    virtual string printMemories() = 0;
};

#endif //EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP