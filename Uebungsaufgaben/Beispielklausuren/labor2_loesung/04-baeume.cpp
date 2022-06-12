/*** INCLUDES: ***/
#include "baum.hpp"
using namespace std;

/*** AUFGABE: Graphen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
 * In der Headerdatei "baum.hpp" ist ein binärer Suchbaum definiert.
 *
 * Schreiben Sie für diesen Baum die Funktion `anzahlBlaetter()`, welche
 * die Anzahl der Blaetter zu einer Wurzel berechnet.
 *
 * Wurzel 3 hat 3 Blaetter --> 1, 6, 12
 * Wurzel 4 hat 2 Blaetter --> 6, 12
 * Wurzel 2 hat 1 Blatt    --> 1
 *            3
            /   \
           2     4
         /        \
        1          8
                  / \
                 6   12
 ***/

/*** LOESUNG: ***/
int Knoten::anzahlBlaetter()
{
  if (empty()) { return 0; }
  // Variablen zum zwischenspeichern der Ergebnisse der einzelnen Knoten
  int nL = 0, nR = 0;
  // Wenn ein Knoten keine weiteren Kinder hat ist er ein Blatt
  if(links->empty() && rechts->empty()) return 1;

  // Laufe links und rechts getrennt bis zum Ende und speichere die Rückgabe
  if (!links->empty()) { nL += links->anzahlBlaetter(); }
  if (!rechts->empty()) { nR += rechts->anzahlBlaetter(); }

  return nL + nR;
}

/*** TESTCODE/MAIN: ***/
int main()
{
  Knoten b1;
  b1.insert(3);
  b1.insert(4);
  b1.insert(8);
  b1.insert(2);
  b1.insert(1);
  b1.insert(12);
  b1.insert(6);

  check_result(b1.anzahlBlaetter(), 3);                 // Soll 3 ausgeben
  check_result(b1.links->anzahlBlaetter(), 1);          // Soll 1 ausgeben
  check_result(b1.rechts->anzahlBlaetter(), 2);         // Soll 2 ausgeben
  check_result(b1.rechts->rechts->anzahlBlaetter(), 2); // Soll 2 ausgeben

  Knoten b2;
  check_result(b2.anzahlBlaetter(), 0); // Soll 0 ausgeben

  return 0;
}