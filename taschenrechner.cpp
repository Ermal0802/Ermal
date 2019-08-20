#ifndef TASCHENRECHNER_CPP
#define TASCHENRECHNER_CPP


#include <iostream>
#include "taschenrechner.hpp"

using namespace std;

int add(int a,int b){
  return a + b;
}


int sub(int a, int b){
  int c;
  c = a - b;
  
  return c;
}


int multi(int a, int b){
  int c;
  c = a * b;
  
  return c;
}


float geteilt(float a, float b){
  float c;  
  c = a / b;
  
  return c; 
}


void eingabe(int &x, int &y) {
    cout << "Zahl A : ";
    cin >> x;
    cout << "Zahl B : ";
    cin >> y;
}

int taschenrechner (){
  cout << " Plus (1); Minus (2); Multi(3); Geteilt(4):" << endl;
  int i, x, y;
  cin >> i;

  float ergebniss = 0; //<-----------
  
  
  
  if(i == 1){
    cout << "A + B = C" << endl;
    eingabe(x,y);
    ergebniss = add(x,y);
  }
  
  if(i == 2) {
    cout << " A -B = C" << endl;
    eingabe(x,y);
    ergebniss = sub(x,y);
  }
  
  if(i ==3){
    cout << "A * B = C" << endl;
    eingabe(x,y);
    ergebniss = multi(x,y);
  }
  
  if(i == 4){
    cout << "A / B = C" << endl;
    eingabe(x,y);
    ergebniss = geteilt(x,y);
  }
  
  cout << "Ergebniss: [" << ergebniss << "]" << endl; //<----------------
  
  return 0;
}

#endif