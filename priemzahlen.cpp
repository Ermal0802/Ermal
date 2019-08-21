#ifndef PRIEMZAHLEN_CPP
#define PRIEMZAHLEN_CPP

#include <cmath>
#include <iostream>
#include "priemzahlen.hpp"

bool isPrim(int m){
  if (m == 1) return false;
  if (m == 2) return true;
  double w = sqrt(m);
  for(int i = 2; i <= w; i++){ 
    if( (m % i) == 0 ){
      return false;
    }
  }
  return true;
}

int rech (int zah) {  
  for(int y = 1; y <= zah; y++){
    if ( isPrim(y) ) {
      cout << y << endl;
    }
  }
}

int priemzahlen(){

// 1. Zahl eingaben (Zahl <= 100)
// 2. Alle Primzahlen bis zu dieser Zahl auflisten.
// Was ich sehen will:
//  if; funktion; mehrere schleifen

  int zahl = zahlenEingabe();

  rech(zahl);
}


int zahlenEingabe(int max, int min, const char* output, const char* msg) {
  int zahl = 0;

  do {
    cout << output;
    cin >> zahl;
    if((zahl > max)||(zahl <= min) ) {
      cout << msg << endl;
    }
  } while ( (zahl > max) || (zahl <= min) );

  return zahl;
}


#endif
