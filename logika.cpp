#include <iostream>

using namespace std ;

int main () {
    
    int a = 3 ;
    int b = 7 ;

    bool hasil ;

    //operator logika = not, and, or

    //NOT (!)
    cout << "=NOT=" << endl ;
    hasil = !(a==3) ;
    cout << hasil << endl ;

    //AND , kedua nilai true untuk menghasilkan true
    cout << "=AND=" << endl ;
    hasil = (a == 3) and (b == 7) ;
    cout << hasil << endl ;
    hasil = (a == 3) and (b == 8) ;
    cout << hasil << endl ;
    hasil = (a == 4) and (b == 7) ;
    cout << hasil << endl ;
    hasil = (a == 4) and (b == 8) ;
    cout << hasil << endl ;

    //OR , salah satu nolau true maka hasil true
    cout << "=OR=" << endl ;
    hasil = (a == 3) or (b == 7) ;
    cout << hasil << endl ;
    hasil = (a == 3) or (b == 8) ;
    cout << hasil << endl ;
    hasil = (a == 4) or (b == 7) ;
    cout << hasil << endl ;
    hasil = (a == 4) or (b == 8) ;
    cout << hasil << endl ;

    //not and, contoh
    hasil = !((a == 3) or (b == 7)) ;
    cout << hasil << endl ;

    cin.get() ;
    return 0 ;
}