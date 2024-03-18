#include "Granja.h"
#include "Critter.h"
#include <iostream>

using namespace std;

void Granja::Add(Critter* aCritter) {
    m_Critters.push_back(aCritter);
}

void Granja::RollCall() const {
    for (const auto& critter : m_Critters) {
        cout << "Critter actual: " << critter << endl;
    }
}

Granja::Granja(int espais) : m_Espais(espais) {}