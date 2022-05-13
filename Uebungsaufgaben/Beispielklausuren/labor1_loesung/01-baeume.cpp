#include"baum.hpp"
#include<iostream>
using namespace std;

/*** AUFGABE: B�ume, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.hpp" ist ein bin�rer Suchbaum definiert.

     Schreiben Sie f�r diesen Baum eine Funktion, die die Summe
     aller Elemente des Baumes zur�ckliefert.
***/

/*** TESTCODE/MAIN: ***/
int main()
{
    Knoten b1;
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);

    cout << b1.summe() << endl;      // Soll 12 ausgeben
    return 0;
}

/*** LOESUNG: ***/
int Knoten::summe()
{
    // Die Summe der Knoten eines Baumes errechnet sich aus dem Wurzelelement
    // und der Summen des linken und rechten Teilbaumes. Deshalb rekursiv:
    // Wir rufen die Summenfunktion f�r den linken und rechten Teilbaum auf
    // und addieren die eigene Wurzel hinzu.

    if (empty()) return 0;
    return data + links->summe() + rechts->summe();
}

/*** ANMERKUNGEN: ***/
