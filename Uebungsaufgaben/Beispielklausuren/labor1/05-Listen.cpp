#include"arraylist.hpp"
#include<iostream>
using namespace std;

/*** AUFGABE: Listen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "arraylist.hpp" ist eine Listen-Datenstruktur
     definiert (genauere Erklärung siehe dort).

     Schreiben Sie für diese Liste eine Funktion print(),
     die alle Zahlen in der Liste der Reihe nach auf der Konsole ausgibt.
***/


/*** TESTCODE/MAIN: ***/
int main() {
    ArrayList l;

    for (int x=0; x<15; x++) l.push_back(x);
    l.print();              // Soll die Zahlen 0 bis 14 ausgeben

    return 0;
}

/*** LOESUNG: ***/
void ArrayList::print()
{

}

/*** ANMERKUNGEN: ***/