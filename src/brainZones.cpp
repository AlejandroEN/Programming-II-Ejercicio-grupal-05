#include "../include/brainZones.hpp"

string ChildhoodZone::getFormattedMemories()
{
    string text = "Recuerdos de la zona de la niñez: \n";

    auto memories = getMemories();

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string AdolescentZone::getFormattedMemories()
{
    string text = "Recuerdos de la zona adolescente: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string AdultZone::getFormattedMemories()
{
    string text = "Recuerdos de la zona de la adultez: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string OldZone::getFormattedMemories()
{
    string text = "Recuerdos la zona de la vejez: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}

string SubconsciousZone::getFormattedMemories()
{
    string text = "Recuerdos de la zona del subconsciente: \n";

    for (const auto &memory : getMemories())
    {
        text += memory + "\n";
    }

    return text;
}