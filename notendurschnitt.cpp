#ifndef NOTENDURSCHNITT_CPP
#define NOTENDURSCHNITT_CPP

#include <iostream>
#include "notendurschnitt.hpp"
#include "priemzahlen.hpp"

using namespace std;

int rechSchnitt(int z) {

  int noten[z];

  for(int i = 0; i < z; i++) {
      cin >> noten[i];  
  }

  for(int i = 0; i < z; i++) {
    cout << noten[i] << endl;
  }
  
}

int notendurschnitt(){ 
  
  //int fachCount = zahlEingabe(30,4);
  //rechSchnitt(fachCount);

}

#endif