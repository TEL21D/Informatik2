#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>

struct Element {
  int _key = 0;
  int _height = 0;
  Element * _left = nullptr;
  Element * _right = nullptr;

  bool empty();
  void set(int key);
  void insert(int key);
  std::string inOrderValues();

  std::string dotString();


  // Hilfsfunktionen für internen Gebrauch:

  // Aktualisiert den Eintrag fuer die Höhe des Knotens.
  void update_height();

  // Bestimmt den Balancefaktor des Knotens.
  int balanceFactor();
};

/* Funktionen zum Durchführen von Rotationen
 *
 * Anmerkung: Diese Funktionen sind als freie Funktionen ausgeführt.
 * Sie sollen den (Teil-)Baum reorganisieren und den Pointer auf die
 * neue Wurzel zurückliefern.
 *
 * Die Idee ist, dass die `rotate...()`-Funktionen jeweils vom Elternknoten
 * aufgerufen werden. D.h. jedes Elternteil entscheidet am Ende eines `insert()`,
 * ob durch eines seiner Kinder rotiert werden muss.
 */
Element * rotateLeft(Element * root);
Element * rotateRight(Element * root);
Element * rotateLeftRight(Element * root);
Element * rotateRightLeft(Element * root);

// Prüft, ob eine Rotation notwendig ist und führt die richtige Rotation ggf. durch.
Element * rotate(Element * root);

#endif