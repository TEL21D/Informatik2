# Graphen

Zeichnen Sie den Graphen zu foldenen Adjazenzmatrizen und geben Sie an ob dieser gerichtet oder ungerichtet ist:

## Graph1
|x    |a    |   b | c | d|
| --- | --- | --- |---| ---|
|a    |0|1|1|1|
|b    |0|0|0|1|
|c    |0|0|0|0|
|d    |0|0|0|0|

**Lösung:**
- [Gerichteter Graph](https://dreampuf.github.io/GraphvizOnline/#digraph%20G%20%7B%0A%20%20%20%20a%20-%3E%20b%20%0A%20%20%20%20a%20-%3E%20c%0A%20%20%20%20a%20-%3E%20d%0A%20%20%20%20b%20-%3E%20d%0A%7D)

## Graph2
|x    |a    |   b | c | d|
| --- | --- | --- |---| ---|
|a    |0|1|1|1|
|b    |1|0|0|1|
|c    |1|0|0|0|
|d    |1|1|0|0|

|x    |a    |   b | c | d|
| --- | --- | --- |---| ---|
|a    |0||||
|b    |1|0|||
|c    |1|0|0||
|d    |1|1|0|0|

**Lösung:**
- [ungerichteter Graph](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%20a%20--%20b%20%0A%20%20%20%20a%20--%20c%0A%20%20%20%20a%20--%20d%0A%20%20%20%20b%20--%20d%0A%7D)