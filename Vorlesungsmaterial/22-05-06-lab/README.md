# Labor 06.05.22 -  Soziales Netzwerk

Implementierung einer Struktur für ein Soziales Netzwerk basierend auf dem [Code der letzten Vorlesung](https://github.com/TEL21D/Informatik2/blob/main/Vorlesungsmaterial/22-05-04/socialNet.cpp):
- Im `struct User` sind folgende Funktionen zu implementieren:
  - Der Konstruktor `User(string name, unsigned int alter, string studienGang, string studienOrt)`
  - `void freundHinzufuegen(...)`
- Im `struct socialNet` sollten mindestens folgende Methoden funktionieren (es können aber noch weitere hinzugefügt werden):
  - `vector<User*> nutzerNachStudiengang(string studienGang)`: Diese Methode soll einen Vector mit Usern zurückliefern die `string studienGang` enthalten. (Weitere Funktionen für den StudienOrt möglich)
  - `void nutzerErstellen(string name, unsigned short alter, string studienGang)`, um den User direkt durch Aufruf der Methode zu erstellen und hinzuzufügen
  - `unsigned int nutzerAnzahl()`: Methode welche die Anzahl der Nutzer zurück gibt.
  - `User* nutzerSuchen(string name)`: Methode soll Pointer auf den User mit Namen `string name` zurück geben.
- **Erweiterung:** Abspeichern des Netzwerks in Dateien, damit diese beim Beenden des Programms nicht verloren gehen und beim start wieder geladen werden.
- **Erweiterung:** Überlegen Sie wie man `struct Kante` nutzen kann um Informationen der Kanten zu speichern. Diese Informationen könnten z.B. die Anzahl der Chats und/oder der letzte Chat zwischen zwei Nutzern sein.
