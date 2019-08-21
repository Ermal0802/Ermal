#ifndef NOTENDRUCHSCHNITT2_CPP
#define NOTENDRUCHSCHNITT2_CPP

#include <iostream>
#include <fstream>
#include "zeugniss.hpp"
#include "notendurschnitt.hpp"
#include "notendurchschnitt2.hpp"


using namespace std;

struct Ergebniss2{ 
  int max;
  int min;
  double avg;
  int summ;
  int AnzahlFaecher;
};

void printErg(Ergebniss2 druck){
  cout << "Max: " << druck.max << endl;
  cout << "Min: " << druck.min << endl;
  cout << "Avg: " << druck.avg << endl;
  cout << "Sum: " << druck.summ << endl;
  cout << "Anzahl der Faecher: " << druck.AnzahlFaecher << endl;  
}

struct Ergebniss2 carc () {
  
  Ergebniss2 Zettel;
  Zettel.max = 1;
  Zettel.min = 6;
  Zettel.summ = 0;
  Zettel.AnzahlFaecher = 0;
  
  //Zeugniss auslesen
  fstream f;
  f.open("zeugniss.txt", ios::in);
  

  
  int note; 
  
  while ( !f.eof() ) {

    //AnzahlFaecher = AnzahlFaecher + 1;
    //AnzahlFaecher += 1;
    Zettel.AnzahlFaecher++;
  
    f >> note;
   
    Zettel.summ += note;

    if ( note > Zettel.max ) {
      Zettel.max = note;
    }
    
    if ( note < Zettel.min ) {
      Zettel.min = note;
    }    


    cout << "Note: " << note << endl;// In Datei Schreiben
    
  }

  f.close(); 

  Zettel.avg = (double)Zettel.summ / (double)Zettel.AnzahlFaecher;

  return Zettel;
}

int notendurchschnitt2() {
  
  
  
  Ergebniss2 result;
  
  result = carc();
  
  printErg(result);
  

}

#endif