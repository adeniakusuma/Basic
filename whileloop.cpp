#include <iostream>

using namespace std ;

int main () {

    int a = 5 ;

    while (a < 20) {
        cout << "yes" << endl ;
        a++ ; //jika tanpa fungsi tambahan ini, maka akan looping terus menerus
              //fungsi itu gunanya untuk membatasi sampai mana looping akan berhenti
              //fungsinya terserah bisa +2 dll
              // disitu artinya a(5) akan ditambahkan 1 terus menerushingga mencapai batas maksimum a < 20
    }

    cout << "selesai" << endl ;
    cin.get() ;
    return 0 ;
}