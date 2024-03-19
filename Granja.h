#pragma once

#include <vector>
#include <iostream>
#include "Orco.h"
using namespace std;

//Aqui hi ha la granja la qual guarda els Critters
class Granja {
public: Granja(int espais = 1);
	  void Add(Critter* aCritter);
	  void RollCall() const;

private: vector < Critter* > m_Critters;//Es van guardant en un vector
};