#ifndef KASSENBON_CPP
#define KASSENBON_CPP

#include <iostream>
#include "kassenbon.hpp"

using namespace std;

int kassenbon(int argc, char* args[]) {

  int ganzZahl = 8;
  float kommaZahlen = 8.3456;
  double grosseKommaZahl = 9.45678452;
  char buchstabe = 'A';
  bool jaNein = false;
  const char* wort = "Hallo";


  int preis = 10;
  char* produkt = args[1];

  if(argc > 1) {
    cout << produkt << " "  << preis << " " << "Euro" << endl;
  }
  else {
    cout << "Keine Bestellung" << endl;
  }
}

#endif