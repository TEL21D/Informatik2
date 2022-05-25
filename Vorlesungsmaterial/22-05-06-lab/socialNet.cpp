#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

struct User
{
    string _name;
    string _geburtsTag;
    unsigned int _alter;
    string _studienGang;
    string _studienOrt;

    vector<User*> _freundesListe;

    // Konstruktor
    User(string name, unsigned int alter, string studienGang,
        string studienOrt, string geburtsTag = "") {
            _name = name;
            _alter = alter;
            _studienGang = studienGang;
            _studienOrt = studienOrt;
            _geburtsTag = geburtsTag;
    }

    unsigned int anzahlFreunde() {
        return _freundesListe.size();
    }

    void freundHinzufuegen(User * newUser) {

    }
    void freundLoeschen(User * delUser) {
        // nach delUser suchen und aus _freundesListe entfernen
        auto pos = find(_freundesListe.begin(), _freundesListe.end(), delUser);
        if (pos != _freundesListe.end())    // wenn delUser gefunden wurde
            _freundesListe.erase(pos);
    }
    void printNutzer() {
        cout << "Name: " << _name << ", " << _studienGang
                << ", "  << _studienOrt << ", "  << _geburtsTag <<"\n";
    }
};

struct Kante
{
    User* user1;
    User* user2;
    /* Meta Daten */
    unsigned int _chatAnzahl;
    tm _letzterChat;
};



struct socialNet
{
    vector<User*> _nutzerListe;

    void nutzerErstellen(string name, unsigned int alter, string studienGang = "",
        string studienOrt = "", string geburtsTag = "00.00.0000") {
            User* user1 = new User(name, alter, studienGang, studienOrt, geburtsTag);
            _nutzerListe.push_back(user1);
    }
    void nutzerErstellen(User* newUser) {
            _nutzerListe.push_back(newUser);
    }
    void nutzerLoeschen(User* delUser) {
        // nach dem delUser in _nutzerListe und entfernen
        auto pos = find(_nutzerListe.begin(), _nutzerListe.end(), delUser);
        if (pos != _nutzerListe.end())  // wenn delUser gefunden wurde
            _nutzerListe.erase(pos);
        // danach delete aufrufen
        delete delUser;
    }
    void nutzerVerknuepfen(User* user1, User* user2) {
        user1->freundHinzufuegen(user2);
        user2->freundHinzufuegen(user1);
    }
    // Nutzer eines Studiengangs suchen und zurückgeben
    vector<User*> nutzerNachStudiengang(string studienGang) {
        // nach dem string studienGang in _nutzerListe suchen
        vector<User*> result;
        for (User* usr: _nutzerListe)
        {
            if (usr->_studienGang == studienGang)
            {
                result.push_back(usr);
            }
        }
        return result;
    }
    vector<User*> nutzerSuchen(string name) {
        // nach dem string name in _nutzerListe suchen
        vector<User*> result;
        for (User* usr: _nutzerListe)
        {
            if (usr->_name == name)
            {
                result.push_back(usr);
            }
        }
        return result;
    }
    unsigned int nutzerAnzahl() {
        return _nutzerListe.size();
    }
    void nutzerAnzeigen() {
        // gibt alle Nutzer im Netzwerk aus
        for(User* us: _nutzerListe) {
            us->printNutzer();
        }
    }
};


int main(int argc, char const *argv[])
{
    socialNet netzwerk;
    User* user1 = new User("Frank", 25, "ET", "Mannheim", "25.05.1997");
    User* user2 = new User("Olvia", 22, "ET", "Mannheim", "13.10.1998");

    netzwerk.nutzerErstellen(user1);
    netzwerk.nutzerErstellen(user2);
    netzwerk.nutzerErstellen("Max Mustermann", 21, "BWL", "Heidelberg");
    netzwerk.nutzerErstellen("Max Mustermann", 22, "Physik", "München");

    cout << "\n Alle Nutzer des Netzwerks anzeigen:\n";
    netzwerk.nutzerAnzeigen();

    cout << "\n Suche nach Max Mustermann...\n";
    vector<User*> result = netzwerk.nutzerSuchen("Max Mustermann");
    for (int i = 0; i < result.size(); i++)
    {
        result[i]->printNutzer();
    }

    netzwerk.nutzerVerknuepfen(user1, user2);
    netzwerk.nutzerVerknuepfen(user1, user2);
    return 0;
}
