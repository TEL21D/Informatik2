/*** INCLUDES: ***/
#include "baum.hpp"
#include <iostream>
using namespace std;

/*** AUFGABE: Bäume, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
 * In der Headerdatei "baum.hpp" ist ein binärer Suchbaum definiert.
 * Schreiben Sie für diesen Baum die Funktion `enthaelt(int x)`, die `true`
 * liefert, falls `x` ein Element des Baumes ist, ansonsten `false`.
***/

/*** LOESUNG: ***/
bool Knoten::enthaelt(int x) {}

/*** TESTCODE/MAIN: ***/
int main()
{
  Knoten b1;
  b1.insert(3);
  b1.insert(4);
  b1.insert(5);
  b1.insert(2);

  cout << b1.enthaelt(3) << endl;                 // Soll 1 ausgeben
  cout << b1.links->enthaelt(5) << endl;          // Soll 0 ausgeben
  cout << b1.rechts->enthaelt(8) << endl;         // Soll 0 ausgeben
  cout << b1.rechts->rechts->enthaelt(5) << endl; // Soll 1 ausgeben

  Knoten b2;
  cout << b2.enthaelt(1) << endl; // Soll 0 ausgeben

  return 0;
}