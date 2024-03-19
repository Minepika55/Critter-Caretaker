#include <iostream>
#include <string>
using namespace std;

class Critter {//Aquesta es la classe critter amb les parts que es necessiten per fer-lo funcionar
public: Critter(int hunger = 0, int boredom = 0);
      void Talk();
      void Eat(int food = 4);
      void Play(int fun = 4);
      void Sport(int fun = 4);
      void Study(int fun = 4);
      void Stats() const;
      virtual void Greet() const ;
      friend void Peek(const Critter& aCritter);
      friend ostream& operator << (ostream& os, const Critter& aCritter);
      string m_Name;

private: int m_Hunger;//Aqui hi han les estadistiques privades com la gana i l'aborriment del Critter
       int m_Boredom;
       int GetMood() const;
       void PassTime(int time = 1);
       void Peek(const Critter& aCritter);
};