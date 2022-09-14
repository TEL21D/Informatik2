/*** INCLUDES: ***/
#include "graph.hpp"
using namespace std;

/*** AUFGABE: Graphen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
 * In der Headerdatei "graph.hpp" ist eine User-Datenstruktur für den Graphen eines Sozialen Netzwerks definiert.
 * Schreiben Sie eine Funktion `getFriendsNameBySameStudy()`, welche einen Vector mit den Nutzernamen der direkten Freunde liefert,
 * welche das gleiche Studieren wie der Nutzer.
***/

/*** LOESUNG: ***/
std::vector<std::string> User::getFriendsNameBySameStudy() {
  vector<string> result;
  return result;
}


/*** TESTCODE/MAIN: ***/
int main()
{
  User* user1 = new User("Max Mustermann", "Mannheim", "ET");
  User* user2 = new User("Carla Musterfrau", "Frankfurt", "ET");
  User* user3 = new User("Arno Nym", "Entenhausen", "BWL");
  User* user4 = new User("Muster Student", "Mannheim", "ET");

  user1->addFriend(user2);
  user1->addFriend(user3);
  user1->addFriend(user4);

  user2->addFriend(user3);

  print_vector(user1->getFriendsNameBySameStudy()); // Soll "Carla Musterfrau Muster Student" ausgeben
  print_vector(user2->getFriendsNameBySameStudy()); // Soll "" ausgeben
}