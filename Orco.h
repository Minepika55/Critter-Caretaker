#pragma once
#include <iostream>
#include "Critter.h"

using namespace std;

class Orco : public Critter {
public: int m_DamageMultiplier;
	  Orco();
	  void SpecialAttack() const override;
	  int m_Damage;
	  void Greet() const override;
};