#include "include/brain.hpp"

int main()
{
    auto brain = Brain();

    // Recuerdos de la niñez
    brain.getChildhoodZone().addMemory("Recuerdo de la niñez 1");
    brain.getChildhoodZone().addMemory("Recuerdo de la niñez 2");

    // Recuerdos de la adolescencia
    brain.getAdolescentZone().addMemory("Recuerdo de la adolescencia 1");
    brain.getAdolescentZone().addMemory("Recuerdo de la adolescencia 2");
    brain.getAdolescentZone().addMemory("Recuerdo de la adolescencia 3");

    // Recuerdos de la adultez
    brain.getAdultZone().addMemory("Recuerdo de la adultez 1");
    brain.getAdultZone().addMemory("Recuerdo de la adultez 2");

    // Recuerdos de la vejez
    brain.getOldZone().addMemory("Recuerdo de la vejez 1");
    brain.getOldZone().addMemory("Recuerdo de la vejez 2");
    brain.getOldZone().addMemory("Recuerdo de la vejez 3");
    brain.getOldZone().addMemory("Recuerdo de la vejez 4");

    cout << brain.getAllFormattedMemories() << endl;
}