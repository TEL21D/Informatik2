#include"arraylist.hpp"
#include<iostream>
using namespace std;

/*** AUFGABE: Listen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "arraylist.hpp" ist eine Listen-Datenstruktur
     definiert (genauere Erklärung siehe dort).

     Schreiben Sie für diese Liste eine Funktion get, die eine Zahl i
     erwartet und die das Element an Stelle i zurückliefert.
     Falls i kein gültiger Index ist, soll 0 zurückgeliefert werden.
***/


/*** TESTCODE/MAIN: ***/
int main() {
    ArrayList l;

    for (int x=0; x<15; x++) l.push_back(x);

    cout << l.get(-3) << endl;   // Soll 0 ausgeben
    cout << l.get(2) << endl;    // Soll 2 ausgeben
    cout << l.get(12) << endl;   // Soll 12 ausgeben
    cout << l.get(20) << endl;   // Soll 0 ausgeben

    return 0;
}

/*** LOESUNG: ***/
int ArrayList::get(int i)
{
    return 0;
}

/*** ANMERKUNGEN: ***/