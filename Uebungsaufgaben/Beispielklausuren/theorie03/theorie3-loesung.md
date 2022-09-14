# Beispielklausur Inf2

## AVL-Bäume

Fügen Sie die folgenden Zahlen nacheinander in einen AVL-Baum ein:

` 35 42 10 5 2 17 15 `

Zeichnen Sie den Baum vor und nach jeder Rotation.

- Lösung:
  1. [Baum nach Einfügen von ` 35 42 10 5 2`](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2035%20--%2010%20%0A%20%20%20%2035%20--%2042%0A%20%20%20%2010%20--%205%20%0A%20%20%20%2010%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%205%20--%202%0A%20%20%20%205%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
  2. [Baum nach Rechtsrotation um `10`](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2035%20--%205%20%0A%20%20%20%2035%20--%2042%0A%20%20%20%205%20--%202%0A%20%20%20%205%20--%2010%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
  3. [Baum nach Einfügen von `17`](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2035%20--%205%20%0A%20%20%20%2035%20--%2042%0A%20%20%20%205%20--%202%0A%20%20%20%205%20--%2010%0A%20%20%20%2010%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2010%20--%2017%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
  4. [Baum nach Rechts-Links-Rotation um `35` und `5`](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2010%20--%205%20%0A%20%20%20%2010%20--%2035%0A%20%20%20%2035%20--%2017%0A%20%20%20%2035%20--%2042%20%0A%20%20%20%205%20--%202%0A%20%20%20%205%20--%20D1%5Bstyle%3Dinvis%5D%0A%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
  5. [Baum nach Einfügen von `15`](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2010%20--%205%20%0A%20%20%20%2010%20--%2035%0A%20%20%20%2035%20--%2017%0A%20%20%20%2035%20--%2042%20%0A%20%20%20%205%20--%202%0A%20%20%20%205%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2017%20--%2015%0A%20%20%20%2017%20--%20D2%5Bstyle%3Dinvis%5D%0A%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)


## Graphen - Adjazenzmatrix

Geben Sie die Adjazenzmatrix zu folgendem Graphen an:

- Graphviz-Ansicht:
  ```
    graph G {
    a -- b
    a -- c
    a -- e
    b -- b
    b -- f
    c -- d
  }
  ```
- [Graph als Bild](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20a%20--%20b%0A%20%20a%20--%20c%0A%20%20a%20--%20e%0A%20%20b%20--%20b%0A%20%20b%20--%20f%0A%20%20c%20--%20d%0A%7D)

- Lösung:

|       |  a  |  b  |  c  |  d  |  e  |  f  |
| ----- | --- | --- | --- | --- | --- | --- |
| **a** | 0 | 1 | 1 | 0 | 1 | 0 |
| **b** | 1 | 1 | 0 | 0 | 0 | 1 |
| **c** | 1 | 0 | 0 | 0 | 1 | 0 |
| **d** | 0 | 0 | 1 | 0 | 0 | 0 |
| **e** | 1 | 0 | 0 | 0 | 0 | 0 |
| **f** | 0 | 1 | 0 | 0 | 0 | 0 |****


## Sortieren

Sortieren Sie die folgende Liste mit dem Verfahren *SelectionSort*:

` 15 3 22 5 1 17 42  `

Geben Sie die Liste nach jedem Durchlauf der inneren Schleife an.
Markieren Sie dabei jeweils, welcher Teil schon als sortiert bekannt ist und welcher noch nicht.

- Lösung:

  * ` 1 | 3 22 5 15 17 42 `
  * ` 1 3 | 15 22 5 17 42 `
  * ` 2 3 5 | 22 15 17 42 `
  * ` 2 3 5 15 | 22 17 42 `
  * ` 2 3 5 15 17 | 22 42 `
  * ` 2 3 5 15 17 22 | 42 `
  * ` 2 3 5 15 17 22 42 | `



## Sortieren

Erklären Sie die Idee hinter dem folgenden Suchalgorithmus:
```cpp
int fooSearch(vector<int> &vec, int zahl) {
  int l = 0, r = vec.size()-1;
  int i;
  while(l<=r){
      i = l+(r-l)/2;
      if(vec[i] == zahl) {
          return i;
      }
      if (vec[i] > zahl) {
          r = i - 1;
      }
      else {
          l = i + 1;
      }
  }
  return -1;
}
```

- Lösung:
  - Der Suchalgorithmus bricht ab wenn der linke index größer als der rechte ist:  `l > r`
  - Der Index `i` wird durch teilen des Suchbereichs ermittelt (bei 6 Elementen -> `i=3`)
  - Wenn die Zahl an Index `i` der gesuchten Zahl entspricht, ist wird der Index zurückgegeben
  - Wenn die Zahl an Index `i` größer als die gesuchte Zahl wird im linken Teilbereich weiter gesucht ansonsten im rechten
  - Wenn die Zahl nicht im Array vorhanden ist wird eine `-1` zurückgegeben

## Struktur von Bäumen

Im Folgenden ist für einen binären Suchbaum eine Pre-Order-Darstellung gegeben. Zeichnen Sie den Baum.

` 100 50 40 60 120 140 `

- Lösung:

  Da es ein binärer Suchbaum ist, ist die In-Ordner-Darstellung bekannt:
    ` 40 50 60 100 120 140 `

  Aus beiden Darstellungen zusammen lässt sich die Baumstruktur rekonstruieren:

  - Die Wurzel ist `100`, da diese in der Pre-Order-Darstellung zuerst kommt.
  - In der In-Order-Darstellung sieht man, dass `40 50 60 ` links stehen und `120 140` rechts.
  - Die Pre-Order-Darstellung zeigt auch, dass die `50` über `40` und `60` kommen muss.
  - Die Pre-Order-Darstellung zeigt, dass rechts die `120` über der `140` steht.
  - [resultierender Baum](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%20100%20--%2050%0A%20%20%20%20100%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%2050%20--%2040%0A%20%20%20%2050%20--%2060%0A%20%20%20%2060%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%20100%20--%20120%0A%20%20%20%20120%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20120%20--%20140%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
