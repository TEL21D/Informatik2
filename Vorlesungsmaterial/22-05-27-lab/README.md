# Labor 21.05.21

## Aufgabe
- Einlesen einer CSV-Datei (separiert z.B. per `;`, `,`, ` ` ) mit beliebigen String ([`void read_stock()`](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-04/io_files.cpp#L61) als Hilfestellung)
- Sortieren / filtern der Einträge von bestimmten Spalten ([Code Beispiel](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-04/lambda.cpp#L23) zur Nutzung von `std::sort()`)
  - Dazu ist es eventuell notwendig in Strings gedpeicherte Zahlen z.b. in `int` oder `double` umzuwandeln
  - **Wichtig: Der Filter- oder Sortiervorgang bezieht sich immer auf eine Spalte. Daher muss daran gedacht werden die anderen Spalten der Reihe an die Sortierung anzupassen damit das gesamte Dokument richtig sortiert wird.**
- In ein sortiertes CSV zurückschreiben (ähnlich wie [`write_file()`](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-04/io_files.cpp#L10))
- Zusatzfunktionen wenn Zeit dafür ist:
  - Ausgeben der Datei als Markdown oder Html


**Tipp:** Die erste Zeile enthält normalerweise die Spaltennamen und sollte daher nicht mit im Sortieralgorithmus beachtet werden. Wenn man z.B. nach `double` oder `int` umwandelt kann dadurch eine Fehlermeldung entstehen, wenn der Typ des Inputparameters nicht richtig geprüft wird.

## Durchführung
- Zusammenarbeit in Gruppen mit 3-4 Personen
- Es kann die [CSV-Datei](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-04/wkn_716460_historic.csv) aus der letzten Vorlesung mit den Aktienkursen oder eine beliebe andere CSV-Datei zum Testen der Funktion genutzt werden


**Noch fragen?**


## Nützliche Links

- [fstream cplusplus.com](https://www.cplusplus.com/reference/fstream/fstream/)
- Konvertieren von string nach double --> [`stod`](https://www.cplusplus.com/reference/string/stod/)
- [Beginners Guide for `std::sort`](https://www.cplusplus.com/articles/NhA0RXSz/)
