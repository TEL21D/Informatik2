# Informatik2
Vorlesungsmaterial zur Informatik2


## Themenübersicht
- Listen Datentypen:
  - Verkettete Liste --> Beispiel
  - Stack (Stapelspeicher): LiFo (last in first out) --> Beispiel
  - Queue (Warteschlange): FiFo (first in first out) --> Beispiel
- Graphen:
  - Baumstrukturen:
    - [Binärbaum](https://www.programiz.com/dsa/binary-tree)
    - [Binärer Suchbaum](https://www.programiz.com/dsa/binary-search-tree)
    - Balancierte Bäume: [AVL Prinzip](https://www.programiz.com/dsa/avl-tree)
    - (Heap)
  - Netzwerke: --> [Graphen](https://www.programiz.com/dsa/graph)
    - Soziale Netzwerke
    - Straßen
    - etc
    - Dastellungsform:
      - Adjazienzmatrix
      - Adjazienzliste
- Suchalgorithmen:
  - BubbleSort
  - MergeSort
  - InsertionSort
  - SelectionSort
  - QuickSort
## Übungsaufgaben
- Implementierung eine verketteten Liste
- AVL Baum Implementierung: [Aufgabenstellung](https://github.com/TEL21D/Informatik2/tree/main/Uebungsaufgaben/Bäume/avl-baeume) --> [Lösung](https://github.com/TEL21D/Informatik2/tree/main/Uebungsaufgaben/Bäume/avl-baeume/loesung)
- Soziales Netzwerk

### Stack Implementierung
- Implementierung der Klasse Stack mit den untern aufgeslisteten Funktionen und Variablen
- Implementierung ist ähnlich zu der verlinkten Liste aber der `push` und `pop` Mechanismus kann verbessert werden indem man nicht immer die ganze Liste durchläuft sondern den head verschiebt, wenn eine neues Element hinzukommt.
```cpp
struct Stack {
  // Member Variablen
  int _size = 0;
  listElement * _head = nullptr;

  // Methoden
  void push();
  void pop();
  void top();
  void size();
  void print();
};
```
