#include <iostream>
#include "Granja.h"
//Aqui he inclos la granja la qual ho embolcalla tot

using namespace std;

int main() {
    Critter crit;
    crit.Talk();
    Orco orc;
    
    int opcio;
    do {//Aqui comenca el bucle del codi
        Critter* critter1 = new Critter();
        Critter* critter2 = new Critter();

        Granja granja;
        granja.Add(critter1);
        granja.Add(critter2);
        //Aqui podem veure les opcions del codi
        cout << "Critter Caretaker" << endl;
        cout << "0 - Sortir" << endl;
        cout << "1 - Escoltar el teu Critter" << endl;
        cout << "2 - Donar de menjar al teu Critter" << endl;
        cout << "3 - Jugar amb el teu Critter" << endl;
        cout << "4 - Fer esport" << endl;
        cout << "5 - Estudiar" << endl;
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
            break;
        case 4:
            crit.Sport();
            break;
        case 5:
            crit.Study();
            break;
        case 6:
            granja.RollCall();
            break;
        case 7:
            crit.Stats();
            break;
        case 8:
            orc.Greet();
            break;
        default:
            cout << "No es reconeix aquesta opcio, siusplau tria una opcio valida" << endl;//Una resposta per si la opcio seleccionada es incorrecta
        }

    } while (opcio != 0);//Si el jugador marca un zero el codi s'acaba
    return 0;
}