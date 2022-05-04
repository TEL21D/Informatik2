#include <iostream>
#include <string>
#include <vector>
#include <ctime>

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
    User() {

    }

    unsigned int anzahlFreunde() {
        return _freundesListe.size();
    }

    void freundHinzufuegen(const User * newUser) {

    }
    void freundLoeschen(const User * newUser) {

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

    void nutzerErstellen() {

    }
    void nutzerLoeschen(const User*) {

    }
    // Nutzer eines Studiengangs suchen und zurückgeben
    vector<User*> nutzerNachStudiengang(string studienGang) {

    }
    vector<User*> nutzerSuchen(string name) {

    }
    unsigned int nutzerAnzahl() {
        return _nutzerListe.size();
    }
};
