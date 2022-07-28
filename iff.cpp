#include <iostream>

using namespace std ;

int main ()
{

    int a ;
    cout << "masukkan angka = " ;
    cin >> a ;

    //if statement
    //kondisi dalam bentuk boolean
    if ( a < 50 ) 
    {
        cout << "angka yang anda masukkan benar!!!" << endl ;
    }

    cout << "terima kasih" << endl ;

    cin.get();
    return 0;
}

