#include <iostream>

using namespace std;


void zahl(int);


int main(int argc, char* args[]) {


  zahl(10);


}


void zahl(int N) {
  cout << N << endl;

  if (N > 0) {
    zahl(N-1);

    cout << N << endl;
  }
}




































/*

  for(int i = 10; i > 0; i--){

    cout << i << endl;


  }
  for(int y = 0; y < 11; y++){

    cout << y << endl;

  }
*/





/*

long meinArray1[4];
meinArray1[0] = 10;
meinArray1[1] = 11;
meinArray1[2] = 12;
meinArray1[3] = 13;
meinArray1[4] = 14;

int meinArray2[2];
meinArray2[0] = 20;
meinArray2[1] = 21;
meinArray2[2] = 22;

//1.
cout << sizeof(meinArray1) << endl;

//2.
cout << sizeof(meinArray2) << endl;

//3.
cout << "Ergebnis:" << meinArray1[1] << endl;

//4.
cout << "Ergebnis:" << meinArray2[1] << endl;

//5.
cout << "Ergebnis:" << meinArray1[3] << endl;

//6.
cout << "Ergebnis:" << meinArray1[4] << endl;

//7.
cout << sizeof(meinArray1)-1 << endl;

//8.
cout << sizeof(meinArray2)-1 << endl;

//9.
cout << "Ergebnis:" << meinArray1[0] << endl;

//10.
cout << "Ergebnis:" << meinArray2[0] << endl;

cout << "########################################" << endl;










  bool i = true;

  while(i){

    cout << "Zahl: ";
    int zahl;
    cin >> zahl;


    if(zahl == 1){
      cout << "Hallo" << endl;
    }

    if(zahl == 2){

      cout << "Cool" << endl;

    }

    if(zahl == 3){

      i = false;
    }
  }

}
  /*
  while(true){

    cout << "Hallo" << endl;

  }


  do {

    cout << "Hallo" << endl;

  } while (true);
  


  cout << "----------------------------------" << endl;

  for(int i = 1; i < argc; i++){

    cout << args[i] << endl;

  }

  cout << "----------------------------------" << endl;




  cout << "Gib mal was ein: ";
  char eingabe[100];
  cin >> eingabe;
  cout << "Du hast \"" << eingabe << "\" eingegeben!" << endl;

  int zahl;
  cin >> zahl;
  cout << "Zahl: " << zahl << endl;




  cout << "Hallo Welt!" << endl;
  cout << "Nochwas" << endl;

}

*/
