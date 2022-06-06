/*** INCLUDES: ***/
#include "baum.hpp"
#include <iostream>
using namespace std;

/*** AUFGABE: Bäume, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
 * In der Headerdatei "baum.hpp" ist ein binärer Suchbaum definiert.
 * Schreiben Sie für diesen Baum die Funktion `anzahlElemente()`, welche
 * die Anzahl aller Elemente eines (Teil-)Baumes liefert.
***/

/*** LOESUNG: ***/
int Knoten::anzahlElemente() {}

/*** TESTCODE/MAIN: ***/
int main()
{
  Knoten b1;
  b1.insert(3);
  b1.insert(4);
  b1.insert(5);
  b1.insert(2);

  cout << b1.anzahlElemente() << endl;                 // Soll 4 ausgeben
  cout << b1.links->anzahlElemente() << endl;          // Soll 1 ausgeben
  cout << b1.rechts->anzahlElemente() << endl;         // Soll 2 ausgeben
  cout << b1.rechts->rechts->anzahlElemente() << endl; // Soll 1 ausgeben

  Knoten b2;
  cout << b2.anzahlElemente() << endl; // Soll 0 ausgeben

  return 0;
}