/*** ERKLAERUNG:

     Hier wird ein Listen-Datentyp 'ArrayList' definiert.
     Diese Liste ist eine Mischung aus verketteter Liste und
     klassischem Array.

     Die Liste besteht aus einer Reihe von Elementen, die als
     einfach verketette Liste aneinandergehaengt sind. Jedes
     dieser Elemente enthaelt wiederum einen Vector, in dem
     bis zu 10 Elemente gespeichert werden.

     Wird nun ein Wert hinzugefuegt, so wird er im hintersten
     Listenelement an die erste freie Stelle geschrieben.
     Ist danach im hintersten Listenelement kein Platz mehr,
     so wird ein neues Element erzeugt.
***/

#include<iostream>
#include<vector>

/** Struktur fuer eine ArrayList
    Jedes Element enthaelt einen Vector fuer bis zu 10 Werte
    und einen Pointer auf das naechste Element.
**/
class ArrayList {
    std::vector<int> data;
    ArrayList * next = nullptr;

public:
    /** Fuegt ein neues Element ans Ende der Liste an.
        Die Rekursion sucht das erste Element, das noch nicht
        voll belegt ist (data.size() == 10 bedeutet, dass kein Platz mehr ist).

        Dann wird ein neues Element eingefuegt.
        Ist danach dieses Element voll besetzt,
        wird ein neuer Nachfolger angehaengt.
    **/
    void push_back(int x) {
        if (data.size() == 10)
        {
            next->push_back(x);
            return;
        }
        data.push_back(x);
        if (data.size() == 10) next = new ArrayList();
    }

    // Aufgabe 05
    void print();

    // Aufgabe 06
    int get(int i);
};
