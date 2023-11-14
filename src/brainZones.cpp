#include "../include/brainZones.hpp"

string ChildhoodZone::printMemories()
{
    string text = "Recuerdos de la zona de la niñez: \n";

    auto memories = getMemories();

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string AdolescentZone::printMemories()
{
    string text = "Recuerdos de la zona adolescente: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string AdultZone::printMemories()
{
    string text = "Recuerdos de la zona de la adultez: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string OldZone::printMemories()
{
    string text = "Recuerdos la zona de la vejez: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string SubconsciousZone::printMemories()
{
    string text = "Recuerdos de la zona del subconsciente: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}