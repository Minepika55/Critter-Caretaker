#include "Critter.h"

void Critter::Talk() {
    cout << "Xerres amb el teu Critter una estoneta, es sent mes felic despres de parlar amb tu" << endl;
    cout << "El Critter t'explica el seguent: " << endl;
    cout << "El meu nivell de gana es el seguent " << m_Hunger << endl;
    cout << "El meu nivell d'aborriment es el seguent " << m_Boredom << endl;
}

void Critter::Eat(int food) {
    cout << "Li dones de menjar al teu Critter, ara ja no té tanta gana" << endl;
    food++;
    cout << "El nivell de gana del Critter es el seguent  " << m_Hunger << endl;
}

void Critter::Play(int fun) {
    cout << "Jugues una estona amb el teu Critter, ara ja no es sent tan aborrit" << endl;
    fun++;
    cout << "El nivell d'aborriment del Critter es el seguent  " << m_Boredom << endl;
}

void Critter::Sport(int fun) {
    cout << "El Critter fa esport amb una pilota, es sent més content pero ara te mes gana." << endl;
    fun++;
    m_Hunger--;
    cout << "El nivell de gana del Critter es el seguent  " << m_Hunger << endl;
    cout << "El nivell d'aborriment del Critter es el seguent  " << m_Boredom << endl;
}

void Critter::Study(int fun) {
    cout << "El Critter estudia per el seu proxim examen, ara esta mes aborrit." << endl;
    m_Boredom--;
    cout << "El nivell d'aborriment del Critter es el seguent  " << m_Boredom << endl;
}

void Critter::PassTime(int time) {
    time++;
    m_Hunger--;
    m_Boredom--;

    if (m_Boredom <= 0) {
        cout << "El teu Critter s'ha mort d'aborriment." << m_Boredom << endl;
    }

    if (m_Hunger <= 0) {
        cout << "El teu Critter s'ha mort de gana." << m_Boredom << endl;
    }
}

void Critter::Stats() const {
    cout << "Nivell de gana: " << m_Hunger << endl;
    cout << "Nivell d'avorriment: " << m_Boredom << endl;
}

void Critter::Greet() const {
    cout << "Hola que tal!" << endl;
}

ostream& operator >> (ostream& os, Critter& aCritter) {
    os << "Critter Object-";
    os << "m_Name:" << aCritter.m_Name;
    return os;
}

void Peek(const Critter& aCritter) {
    cout << aCritter.m_Name << endl;
}

Critter::Critter(int hunger, int boredom) : m_Hunger(hunger), m_Boredom(boredom) {}