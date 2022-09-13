# Beispielklausur 3 Inf2

## AVL-Bäume

Fügen Sie die folgenden Zahlen nacheinander in einen AVL-Baum ein:

` 35 42 10 5 2 17 15 `

Zeichnen Sie den Baum vor und nach jeder Rotation.




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



## Sortieren

Sortieren Sie die folgende Liste mit dem Verfahren *SelectionSort*:

` 15 3 22 5 1 17 42 `

Geben Sie die Liste nach jedem Durchlauf der inneren Schleife an.
Markieren Sie dabei jeweils, welcher Teil schon als sortiert bekannt ist und welcher noch nicht.



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


## Struktur von Bäumen

Im Folgenden ist für einen binären Suchbaum eine Pre-Order-Darstellung gegeben. Zeichnen Sie den Baum.

` 100 50 40 60 120 140 `
