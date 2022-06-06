/*** INCLUDES: ***/
#include "graph.hpp"
using namespace std;

/*** AUFGABE: Graphen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
 * In der Headerdatei "graph.hpp" ist eine User-Datenstruktur für den Graphen eines Sozialen Netzwerks definiert.
 * Schreiben Sie eine Funktion getFriendsStudy(), welche einen Vector mit den Studiengaengen der direkten Freunde liefert.
***/

/*** LOESUNG: ***/
vector<string> User::getFriendsStudy() {
  vector<string> result;
  for (User * u : _friends) {
    result.push_back(u->_unicourse);
  }
  return result;
}


/*** TESTCODE/MAIN: ***/
int main()
{
  User* user1 = new User("Max Mustermann", "Mannheim", "ET");
  User* user2 = new User("Carla Musterfrau", "Frankfurt", "ET");
  User* user3 = new User("Arno Nym", "Entenhausen", "BWL");

  user1->addFriend(user2);
  user1->addFriend(user3);

  user2->addFriend(user3);

  print_vector(user1->getFriendsStudy()); // Soll "ET BWL" ausgeben
  print_vector(user2->getFriendsStudy()); // Soll "BWL" ausgeben
}