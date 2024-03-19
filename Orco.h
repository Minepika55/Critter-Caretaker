#pragma once
#include <iostream>
#include "Critter.h"

using namespace std;

class Orco : public Critter {
public: int m_DamageMultiplier;
	  Orco();
	  void SpecialAttack() const ;
	  int m_Damage;
	  void Greet() const ;
};