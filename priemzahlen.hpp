#ifndef PRIEMZAHLEN_HPP
#define PRIEMZAHLEN_HPP


#include <iostream>

using namespace std;

bool isPrim(int m);

int zahlenEingabe(int max = 100, int min = 0, const char* output = "Zahl: ", const char* msg = "Gib nochmal ein");

int priemzahlen();

#endif
