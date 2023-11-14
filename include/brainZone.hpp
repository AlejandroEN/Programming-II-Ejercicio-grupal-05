#ifndef EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP
#define EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BrainZone
{
protected:
    vector<string> _memories;

public:
    // Getters
    vector<string> getMemories();

    // Methods
    void addMemory(const string &memory);
    string getMemory(int index);
    void removeMemory(signed int index, BrainZone *targetZone);
    virtual string getFormattedMemories() = 0;
};

#endif //EJERCICIO_05_GRUPAL_BRAIN_ZONE_HPP