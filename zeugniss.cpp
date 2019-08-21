#ifndef ZEUGNISS_CPP
#define ZEUGNISS_CPP

#include <iostream>
#include <fstream>

#include "zeugniss.hpp"

using namespace std;

void ZeugnissAnzeige() {

  

  //aus datei lesen
  fstream f;
  f.open("zeugniss.txt", ios::in);
  
  int note;
  
  while ( !f.eof() ) {
  
    f >> note;
    
    cout << "Note: " << note << endl;// In Datei Schreiben
    
  }

  f.close();
  
}

#endif










// In Datei Schreiben
  /*fstream datei;
  datei.open("neue.txt", ios::out);
  
  datei << "Test 123" << endl;
  datei << "Hallo Datei!" << endl;
  
  datei.close();*/