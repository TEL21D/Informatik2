#include"baum.hpp"
#include<iostream>
using namespace std;

/*** AUFGABE: Bäume, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.hpp" ist ein binärer Suchbaum definiert.

     Schreiben Sie für diesen Baum eine Funktion, die die Summe
     aller Elemente des Baumes zurückliefert.
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
    return 0;
}


/*** ANMERKUNGEN: ***/
