#include "Orco.h"

void Orco::SpecialAttack() const {
    cout << "Special Attack inflicts " <<
        (m_DamageMultiplier * m_Damage) <<
        " damage points!\n";
}

void Orco::Greet() const  {
    cout << "Orc gruny hola." << endl;
}

Orco::Orco() : Critter(180, 50) {}