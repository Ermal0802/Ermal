#ifndef NOTENDURSCHNITT_CPP
#define NOTENDURSCHNITT_CPP

#include <iostream>
#include "notendurschnitt.hpp"
#include "priemzahlen.hpp"

using namespace std;


struct Ergebniss {
  int max;
  int min;
  double avg;
  int summ;
};

struct Ergebniss carc(int* noten, int notenL) {
  
  Ergebniss Zettel;
  Zettel.max = 1;
  Zettel.min = 6;
  Zettel.summ = 0;
  
  for(int i = 0; i < notenL; i++) {
    
    Zettel.summ += *(noten + i);
    
    if( *(noten + i) > Zettel.max ) {
      Zettel.max = *(noten + i);
    }
    
    if( *(noten + i) < Zettel.min ){
      Zettel.min = *(noten + i);
    }
    
  }
  Zettel.avg = (double)Zettel.summ / (double)notenL;
  
  return Zettel;
}

void rechSchnitt(int* noten, int notenL) {
  
  for(int i = 0; i < notenL; i++) {
    //cout << "Note (" << (i+1) << "): ";
    *(noten + i) = zahlenEingabe(6, 0, "Note: ", "Noten gehen von 1-6 !");
  }

}

int notendurschnitt() {
  
  //Benutzer gibt anzahl der Fächer ein
  int AnzahlFaecher = zahlenEingabe(30, 4, "Fachanzahl: ", "Bitte eine Zahl zwichen 5 und 30 eingaben!");
  
  Ergebniss result;
  
  int noten[AnzahlFaecher];
  int notenL = AnzahlFaecher;
  
  rechSchnitt(noten, notenL);
  result = carc(noten, notenL);
  cout << "min: " << result.min << endl;
  cout << "Max: " << result.max << endl;
  cout << "avg: " << result.avg << endl;
  cout << "sum: " << result.summ << endl;
}

#endif