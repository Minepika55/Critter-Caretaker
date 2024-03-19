#include <iostream>
#include "Granja.h"


using namespace std;

int main() {
    Critter crit;
    crit.Talk();
    Orco orc;

    int opcio;
    do {
        Critter* critter1 = new Critter();
        Critter* critter2 = new Critter();

        Granja granja;
        granja.Add(critter1);
        granja.Add(critter2);

        cout << "Critter Caretaker" << endl;
        cout << "0 - Sortir" << endl;
        cout << "1 - Escolatar el teu Critter" << endl;
        cout << "2 - Donar de menjar al teu Critter" << endl;
        cout << "3 - Jugar amb el teu Critter" << endl;
        cout << "4 - Fer esport" << endl;
        cout << "5 - Estudair" << endl;
        cout << "6 - Mostrar la Granja de Critters" << endl;
        cout << "7 - Mostrar les estadistiques del Critter" << endl;
        cout << "8 - Saludar a l'Orco" << endl;
        cout << "Que vols fer?:" << endl;
        cin >> opcio;

        switch (opcio) {
        case 0:
            cout << "Fins despres" << endl;
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
        case 4:
            crit.Sport();
        case 5:
            crit.Study();
        case 6:
            granja.RollCall();
        case 7:
            crit.Stats();
        case 8:
            orc.Greet();
        default:
            cout << "No es reconeix aquesta opcio, siusplau tria una opcio valida" << endl;
        }

    } while (opcio != 0);
    return 0;
}