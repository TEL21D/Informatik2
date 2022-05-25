#include "io.hpp"
#include <fstream>
#include <iostream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void write_file() {
  ofstream outFile;
  outFile.open("example.txt", ofstream::app); // öffnet/erstellt die Datei example.txt
  ofstream outFile2 ("example2.txt");   // Alternativ Dateinamen an den Konstruktor übergeben


  outFile << "Schreibe eine Zeile in die Datei" << endl;
  outFile << "Schreibe eine zweite Zeile in die Datei\n";
  outFile << "Schreibe dritte Zeile in die Datei\n";

  // WICHTIG: Vor dem Schreiben/Lesen immer pruefen ob die Datei offen ist
  if (outFile2.is_open()) {
    outFile2 << "Schreibe eine Zeile in die Datei" << endl;
    outFile2 << "Schreibe eine zweite Zeile in die Datei\n";
    outFile2 << "Schreibe dritte Zeile in die Datei\n";
  }
  else cout << "Unable to open file\n";

  outFile.close(); // Wichtig damit das OS die Resourcen der Datei wieder freigibt
  outFile2.close();
}

void read_file() {
  ifstream myFile("example.txt");
  string line;
  if(myFile.is_open()) {
    while (getline(myFile, line)) { // lese solange von der Datei bis das Ende erreicht ist
      cout << line << endl;
    }
  }
  else cout << "Unable to open file\n";
  myFile.close();
}

vector<string> split (string zeile, char delimiter = ';') {
  // Eine Möglichkeit ist es den string zu durchlaufen und nach dem delimiter
  // zu suchen und dann bis zu der Stelle den substring in einem vector zu kopieren

  // Eine Weitere Möglichkeit ist das Nutzen der getline Funktionen wie beim einlesen der filestreams
  // Dazu benutzt die stringstream Klasse indem man den string umwandelt und dann auf den stringstream die getline Funktion anwendet
  stringstream ss(zeile);
  vector<string> columns;
  string col;
  while(getline(ss, col, delimiter)) {
    columns.push_back(col);
  }
  // {Datum, Erster, Hoch .... }
  // {2022-05-04 94,54 94,81 93,96 ... }
  return columns;
}

void read_stock() {
  ifstream myFile("Vorlesungsmaterial/22-05-04/wkn_716460_historic.csv");
  string line;
  vector<vector<string>> csv_datei;
  if(myFile.is_open()) {
    while (getline(myFile, line)) { // lese solange von der Datei bis das Ende erreicht ist
      // cout << line << endl;
      csv_datei.push_back(split(line, ';'));
    }

    for (int i_zeile=0; i_zeile < 5; i_zeile++) { // durchlaufe zeilen
      //durchlaufen die spalten
      cout << "Zeile " << i_zeile << " = ";
      for (auto el: csv_datei[i_zeile]) {
        cout << el << " : ";
      }
      /*
      * mit klassischer for Schleife
      for (size_t i = 0; i < csv_datei[i_zeile].size(); i++)
      {
        cout << csv_datei[i_zeile][i] << " : ";
      }
      */
      cout << endl;
    }
  }
  else cout << "Unable to open file\n";
}