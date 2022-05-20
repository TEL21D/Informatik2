# Labor 06.05.22 -  Soziales Netzwerk

Implementierung einer Struktur für ein Soziales Netzwerk basierend auf dem [Code der letzten Vorlesung](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-04/socialNet.cpp):
- Im `struct User` sind folgende Funktionen zu implementieren:
  - Der Konstruktor `User(string name, unsigned int alter, string studienGang, string studienOrt)`
  - `void freundHinzufuegen(...)`
- Im `struct socialNet` sollten mindestens folgende Methoden funktionieren (es können aber noch weitere hinzugefügt werden):
  - `vector<User*> nutzerNachStudiengang(string studienGang)`: Diese Methode soll einen Vector mit Usern zurückliefern die `string studienGang` enthalten. (Weitere Funktionen für den StudienOrt möglich)
  - `void nutzerVerknuepfen(User* user1, User* user2)` um eine Freunschaftsbeziehung zwischen 2 Nutzern im Netzwerk herzustellen.
  - `void nutzerErstellen(string name, unsigned short alter, string studienGang)`, um den User direkt durch Aufruf der Methode zu erstellen und hinzuzufügen
  - `unsigned int nutzerAnzahl()`: Methode welche die Anzahl der Nutzer zurück gibt.
  - `User* nutzerSuchen(string name)`: Methode soll Pointer auf den User mit Namen `string name` zurück geben.
- **Erweiterung:** Abspeichern des Netzwerks in Dateien, damit diese beim Beenden des Programms nicht verloren gehen und beim start wieder geladen werden.
- **Erweiterung:** Überlegen Sie wie man `struct Kante` nutzen kann um Informationen der Kanten zu speichern. Diese Informationen könnten z.B. die Anzahl der Chats und/oder der letzte Chat zwischen zwei Nutzern sein.

## Ausgabe des Baums als dotString
- Ähnlich wie zu der [Implementierung des AVL-Baums](https://github.com/TEL21D/Informatik2/tree/main/Uebungsaufgaben/Bäume/avl-baeume), kann das Soziale Netzwerk als [`dotString`](https://graphviz.org/doc/info/lang.html) ausgeben werden. Die Ausgabe kann kopiert werden und via [GraphvizOnline](https://dreampuf.github.io/GraphvizOnline/) visualisiert werden.
  - Beispielausgabe: 
  ```
    graph G{
        user1 -- user2
        user1 -- user3
        user1 -- user4
        user2 -- user3
        user2 -- user4
        user1 -- user5
    }
  ```

- **Zusatzaufgabe:** Die Methode `string Element::dotString()` so anpassen, dass direkt ein aufrufbarer Link zur Ausgabe des Baum auf GraphvizOnline erstellt wird (Tipp: [url encoding](https://www.w3schools.com/tags/ref_urlencode.asp) der Symbole beachten). 
