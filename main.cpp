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

    // Imprimimos todas las memorias de todas las zonas
    cout << brain.getAllFormattedMemories() << endl;

    // Imprimimos un recuerdo en específico de la zona de la niñez
    cout << brain.getChildhoodZone().getMemory(1) << endl << endl;

    // Se olvida una memoria de la zona de la niñez
    brain.getChildhoodZone().forgetMemory(0, &brain.getSubconsciousZone());

    // Volvemos a imprimir las memorias de la zona de la niñez para comprobar que se haya olvidado
    cout << brain.getChildhoodZone().getFormattedMemories() << endl;

    // Se vuelve a recordar el recuerdo que se olvidó de la zona de la niñez
    brain.getSubconsciousZone().forgetMemory(0, &brain.getChildhoodZone());

    // Volvemos a imprimir las memorias de la zona de la niñez para comprobar que se haya recordado
    cout << brain.getChildhoodZone().getFormattedMemories() << endl;
}