#include <iostream>

using namespace std ;

int main () {

    int a ;
    cout << "masukkan angka = " ;
    cin >> a ;

    //fungsi switch tanpa tambahan break, jika suatu fungsi adalah true
    //maka otomatis akan menjalankan fungsi yang ada dibawahnya
    //fungsi break = membuat fungsi switch seperti if,
        //misalnya jika fungsi 1 benar maka tidak akan menjalankan fungsi dibawahnya
        // default = 
    switch (a) {
        case 1 :
            cout << " a = 1 " << endl ;
            //break;
        case 7 :
            cout << " a = 7 " << endl ;
        case 90 :
            cout << " a = 90 " << endl ;
            break;
        case 4 :
            cout << " a = 4 " << endl ;
        case 5 :
            cout << " a = 5 " << endl ;
        //default:
           // cout << "angka tidak ada" << endl ;
    }

    cout << "akhir dari program" << endl ;

    cin.get() ;
    return 0 ;
}