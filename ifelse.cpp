#include <iostream>

using namespace std ;

int main () {

    int a ;

    cout << "masukkan angka = " ;
    cin >> a ;

    if ( a < 100) {
        cout << "angka anda kurang dari 100" << endl ;
    } else {
        cout << "angka anda tidak memasuki range" << endl ;
    }
    
    int b ;
    cout << "masukkan angka = " ;
    cin >> b ;

    if ( b < 200 ) {
        cout << "angka anda kurang dari 200" << endl ;
    } else if (b < 300) {
        cout << "angka anda kurang dari 300" << endl ;
    } else {
        cout << "angka anda tidak memasuki range" << endl ;
    }

    cin.get() ;
    return 0 ;
}