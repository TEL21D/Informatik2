#include<vector>
#include<iostream>
#include"baum.hpp"
using namespace std;

/*** AUFGABE: Listen, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
     Schreiben Sie eine Funktion 'sorted', die einen
     int-Vector als Argument erwartet.

     Die Funktion soll true zurückliefern, wenn das Array absteigend
     sortiert ist, ansonsten soll sie false zurückliefern.
***/
bool decrease(vector<int> v);


/*** TESTCODE/MAIN: ***/
int main() {
    vector<int> v1 = { 1,3,5,7,9 };
    vector<int> v2 = { 9,7,5,3,1 };

    check_result(decrease(v1), false);      // Soll false zurueckliefern
    check_result(decrease(v2), true);       // Soll true zurueckliefern


    return 0;
}


/*** LOESUNG: ***/
bool decrease(vector<int> v)
{
    // Der Vektor ist *nicht* sortiert, wenn wir eine Position
    // finden, deren rechter Nachbar einen groesseren Wert hat.
    // Wir gehen durch den Vektor und pruefen diese Bedingung.
    // Finden wir ein solches Element, so brechen wir sofort
    // mit false ab. Finden wir keines, geben wir am Ende true
    // zurueck.

    for (int i=0; i<v.size()-1; i++)
    {
        if (v[i] < v[i+1]) return false;
    }
    return true;
}

/*** ANMERKUNGEN: ***/