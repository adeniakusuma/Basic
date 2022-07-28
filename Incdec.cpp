#include <iostream>

using namespace std ;

int main () {

    //increment dan decrement
    //penjumlahan dan pengurangan secara bertahap
    //ada 2 jenis increment, preincrement dan post increment

    int a = 11 ;
    int b = 23 ;

    //preincrement, tanda + sebelum variabel
    cout << a << endl ;
    cout << ++a << endl ; //ditambahkan diawal baru di print
    cout << a << endl ;
    // ++a/a++ artinya sama dengan a+1 =

    //postincrement, tanda + sesudah variabel
    cout << b << endl ;
    cout << b++ << endl ; //ditambahkan setelah di print
    cout << b << endl ;

    cin.get() ;
    return 0 ;
}