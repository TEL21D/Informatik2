#include"baum.hpp"
#include<iostream>
#include<string>
using namespace std;

/*** AUFGABE: Bäume, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.hpp" ist ein binärer Suchbaum definiert.

     Ein Knoten im Baum kann durch einen String beschrieben
     werden, der von der Wurzel ausgehend angibt, wann man
     nach links oder rechts gehen soll.
     Z.B. bedeutet ein String "llr", dass man zwei Mal nach links und
     dann einmal nach rechts gehen soll.
     Der leere String beschreibt die Wurzel selbst.

     Schreiben Sie eine Funktion, die einen solchen String
     als Argumente erwartet.
     Die Funktion soll die Summe der restlichen Elemente
     zurückliefern.

***/


/*** TESTCODE/MAIN: ***/
int main()
{
    Knoten b1;

    b1.insert(42);             // Pfad ab Wurzel: ""
    b1.insert(23);             // Pfad ab Wurzel: "l"
    b1.insert(70);             // Pfad ab Wurzel: "r"
    b1.insert(10);             // Pfad ab Wurzel: "ll"
    b1.insert(30);             // Pfad ab Wurzel: "lr"
    b1.insert(80);             // Pfad ab Wurzel: "rr"

    cout << b1.get_sum("") << endl;      // Soll 255 ausgeben
    cout << b1.get_sum("l") << endl;     // Soll 63 ausgeben
    cout << b1.get_sum("r") << endl;     // Soll 150 ausgeben
    cout << b1.get_sum("ll") << endl;    // Soll 10 ausgeben
    cout << b1.get_sum("lll") << endl;   // Soll 0 ausgeben
    cout << b1.get_sum("lr") << endl;    // Soll 30 ausgeben
    cout << b1.get_sum("rr") << endl;    // Soll 80 ausgeben

    return 0;
}


/*** LOESUNG: ***/
int Knoten::get_sum(string s)
{
    // Wir hangeln uns rekursiv anhand von s durch den Baum.
    // Ist das erste Zeichen ein 'l' gehen wir nach links, ansonsten
    // nach rechts. Dabei loeschen wir jeweils das erste Zeichen.
    // Ist s leer, so sind wir beim gesuchten Knoten angekommen und
    // fangen an die Summe der restlichen Elemente zu bilden

    if (s.empty()) {
        if(empty()) return 0;
        return data + links->get_sum(s) + rechts->get_sum(s);
    }
    if (s[0] == 'l')
    {
        s.erase(s.begin());
        return links->get_sum(s);
    }
    s.erase(s.begin());
    return rechts->get_sum(s);
}

/*** ANMERKUNGEN: ***/