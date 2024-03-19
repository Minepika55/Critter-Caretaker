#pragma once

#include <vector>
#include <iostream>
#include "Orco.h"
using namespace std;

class Granja {
public: Granja(int espais = 1);
	  void Add(Critter* aCritter);
	  void RollCall() const;

private: vector < Critter* > m_Critters;
};