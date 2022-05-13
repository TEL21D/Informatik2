#include"baum.hpp"
#include<iostream>
using namespace std;

/*** AUFGABE: B�ume, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.hpp" ist ein bin�rer Suchbaum definiert.

     Schreiben Sie f�r diesen Baum eine Funktion, die ein Element hinzuf�gt,
     das um 1 kleiner ist kleiner ist als das bisherige kleinste Element.
     Ist der Baum leer, soll eine 0 eingef�gt werden.
***/

/*** TESTCODE/MAIN: ***/
int main()
{
    Knoten b1;
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);

    b1.print();            // Gibt 3 4 5 aus (schon vor L�sung)
    cout << endl;
    b1.min_einfuegen();
    b1.print();            // Soll 2 3 4 5 ausgeben
    cout << endl;
    b1.min_einfuegen();
    b1.print();            // Soll 1 2 3 4 5 ausgeben
    cout << endl;

    Knoten b2;
    b2.min_einfuegen();
    b2.print();            // Soll 0 ausgeben
    cout << endl;

    return 0;
}


/*** LOESUNG: ***/
void Knoten::min_einfuegen()
{
    // Der kleinste Wert des Baumes steht im Knoten von der Wurzel aus ganz links.
    // D.h. wir gehen - �hnlich wie beim L�schen von Knoten - einfach nach ganz links
    // und f�gen dort (links unterhalb) den neuen Wert ein.

    // Rekursiv: Wenn wir schon ganz links sind, erkennen wir das daran, dass das linke
    // Kind leer ist. Ist es das nicht, machen wir rekursiv beim linken Kind weiter.

    if (empty())
    {
        insert(0);
        return;
    }
    if (links->empty())
    {
        links->insert(data-1);
        return;
    }
    links->min_einfuegen();
}

/*** ANMERKUNGEN: ***/