#include <iostream>

using namespace std ;

int main () {

    int a = 3 ;
    float b = 7 ;
    float hasil ;
    
    //penjumlahan
    hasil = a + b ;
    cout << a << "+" << b << "=" << hasil << endl ;

    //pengurangan 
    hasil = a-b ;
    cout << a << "-" << b << "=" << hasil << endl ;

    //perkalian
    hasil = a*b ;
    cout << a << "*" << b << "=" << hasil << endl ;

    //pembagian 
    hasil = b/a ;
    cout << b << "/" << a << "=" << hasil << endl ;

    cin.get() ;
}