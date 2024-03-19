#include "Orco.h"
//L'Orco pot executar un atac
void Orco::SpecialAttack() const {
    cout << "Special Attack inflicts " <<
        (m_DamageMultiplier * m_Damage) <<
        " damage points!\n";
}

void Orco::Greet() const  {//L'Orco simplement saluda a l'usuari quan l'usuari decideix parlar amb ell.
    cout << "Orc gruny hola." << endl;
}

Orco::Orco() : Critter(180, 50) {}//Aquest es el constructor de l'Orco que crea l'Orco amb 180 de gana i 50 d'aborriment