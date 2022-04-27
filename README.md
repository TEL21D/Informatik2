# Informatik2
Vorlesungsmaterial zur Informatik2


## Themenübersicht
- Listen Datentypen:
  - Verkettete Liste
  - Stack (Stapelspeicher): LiFo (last in first out)
  - Queue (Warteschlange): FiFo (first in first out)
- Graphen:
  - Baumstrukturen:
    - Binärbaum
    - Binärer Suchbaum
    - Balancierte Bäume: AVL Prinzip
    - (Heap)
  - Netzwerke:
    - Soziale Netzwerke
    - Straßen
    - etc
    - Dastellungsform: Adjazienzmatrix
## Übungsaufgaben
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