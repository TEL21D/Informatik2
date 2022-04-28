# Aufgaben zu AVL-Bäumen

## Höhe und Balancefaktoren bestimmen.
Implementieren Sie die Funktionen `Element::updateHeight()`
und `Element::balanceFactor()`.

## Rotationen implementieren.
Implementieren Sie die Funktionen
`rotateLeft()`,
`rotateRight(`,
`rotateLeftRight()` und
`rotateRightLeft()`,
die in `element.h` deklariert sind.
(Siehe Kommentar dazu in `element.h`.)

## Rotationen beim Einfügen durchführen
Passen Sie `Element::insert()` so an, dass vor dem Ende der Rekursion jeweils
die Höhe des Elements aktualisiert, der Balancefaktor berechnet und ggf. die
passende Rotation durchgeführt wird.

## Auführen und testen:

- Das Program kann via `make run` ausgeführt werden und gibt den Baum also [dotString](https://graphviz.org/doc/info/lang.html) aus.
- Die Ausgabe kann kopiert werden und via [GraphvizOnline](https://dreampuf.github.io/GraphvizOnline/) visualisiert werden
- Zusatzaufgabe: Die Methode `string Element::dotString()` so anpassen, dass direkt ein aufrufbarer Link zur Ausgabe des Baum auf GraphvizOnline erstellt wird (Tipp: [url encoding](https://www.w3schools.com/tags/ref_urlencode.asp) der Symbole beachten). 
