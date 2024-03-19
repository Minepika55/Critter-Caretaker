#include "Granja.h"

using namespace std;

void Granja::Add(Critter* aCritter) {//Aqui hi ha la funcio que guarda critters a la granja
    m_Critters.push_back(aCritter);
}

void Granja::RollCall() const {//Aqui hi ha la funcio que mostra els critters actuals de la granja
    for (const auto& critter : m_Critters) {
        cout << "Critter actual: " << critter << endl;
    }
}

Granja::Granja(int espais) { m_Critters.reserve(espais); }//Constructor de la granja