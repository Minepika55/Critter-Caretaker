#pragma once
#include <iostream>
#include "Critter.h"

using namespace std;
//Aquesta es la classe Orco heredada del Critter la qual parla i pot atacar
class Orco : public Critter {
public: int m_DamageMultiplier;
	  Orco();
	  void SpecialAttack() const ;
	  int m_Damage;
	  void Greet() const ;
};