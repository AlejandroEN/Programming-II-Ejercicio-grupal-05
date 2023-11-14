#include "include/brain.hpp"

int main()
{
    auto brain = Brain();
    brain.getChildhoodZone().addMemory("Va al colegio Trilce y es el primero en su clase");
    cout << brain.getChildhoodZone().printMemories() << endl;
}