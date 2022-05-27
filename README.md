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
  - Lineare Suche
    - Liste muss **nicht** sortiert sein
    - Man läuft so lange Element für Element durch die Liste bis man das gesucht Element gefunden hat oder am Ende der Liste ankommt
    - Laufzeitkomplexität: O(n)
  - Binäre Suche:
    - Liste muss sortiert sein oder man braucht eine binäre Baumstruktur der Daten
    - Der Suchraum wird eine jedem Suchschritt um die Hälfte verkleinert
    - Laufzeitkomplexität: O(log n)   
- Sortiergorithmen:
  - BubbleSort:
    - Laufe durch die Liste und vertausche bei Bedarf mit dem vorherigen Element
    - Wenn kein Tausch mehr notwendig ist, ist die Liste sortiert
    - Laufzeitkomplexität: 
      - Worst-case: O(n^2)   
      - Best-case (wenn schon sortiert): O(n)
    - Speicherbedarf: O(1) --> Konstanter Speicher
  - InsertionSort:
    - `Sortieren Durch Einfügen`
    - Liste wird einen  sortierten und unsortierten Teil aufgeteilt (mit 2 Zeigern)
    - Wenn das nächste Element größer ist kann der sortierte Teil einfach vergrößert werden
    - Wenn das Element kleiner ist, wird es an die richtige Stelle im sortierten Teil verschoben
    - Laufzeitkomplexität: O(n^2)
    - Speicherbedarf: O(1) --> Konstanter Speicher
    - Besser als SelectionSort and BubbleSort für kleine Datensätze
  - SelectionSort:
    - Liste wird einen  sortierten und unsortierten Teil aufgeteilt (mit 2 Zeigern)
    - Laufe durch die gesamte Liste und suche das kleinste Element des unsortierten Teils und verschiebe es durch Tausch an das Ende des sortierten Teils
    - Laufzeitkomplexität: Immer O(n^2), auch für bereits sortierte Listen
    - Speicherbedarf: O(1) --> Konstanter Speicher
  - QuickSort:
    - Wähle ein Pivot Element
    - Sortiere die Liste mit Zeigern (von links und recht laufend) bis sich die Zeiger treffen --> Platz für das Pivot Element (Pivot Index)
    - Vergleiche die Elemente mit de Pivot und vertausche bei Bedarf, wenn links größer als Pivot und rechts kleiner als Pivot
    - Teile die Liste am Pivot Index und rufe die Funktion rekursiv für die beiden Teile auf
    - Laufzeitkomplexität: 
      - Durchschnittlich O(n * log n)   
      - Im schlimmste Fall bei einer bereits sortierten Liste und schlechten Pivot O(n^2) möglich
    - Speicherbedarf: O(n) extra Speicher
    - Der Algorithmus bietet das Potential die Ausführung parallel auszuführen 
  - MergeSort:
    - Teile die Liste in jedem Schritt in die Hälfte bis zum kleinesten Element (1)
    - Füge die benarchbaten Element/Listen Sortiert wieder zusammen 
    - Implementierung meistens rekursiv
    - Laufzeitkomplexität: O(n * log n) 
    - Speicherbedarf: O(n) extra Speicher
## Übungsaufgaben
- Implementierung eine verketteten Liste --> Loesung
- AVL Baum Implementierung: [Aufgabenstellung](https://github.com/TEL21D/Informatik2/tree/main/Uebungsaufgaben/Bäume/avl-baeume) --> [Lösung](https://github.com/TEL21D/Informatik2/tree/main/Uebungsaufgaben/Bäume/avl-baeume/loesung)
- Soziales Netzwerk --> [Loesung](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-06-lab/socialNet.cpp)
- [Element finden](https://github.com/TEL21D/Informatik2/tree/main/Uebungsaufgaben/Bäume/element_finden) --> Loesung

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
