#include <iostream>

using namespace std ;

int main () {

    float a,b,hasil ;
    char aritmatika ;
    //char adalah tipe data, character

    cout << "\nPROGRAM KALKULATOR" << endl ;

    //memasukkan input karakter
    cout << "masukkan nilai pertama = " ;
    cin >> a ;
    cout << "pilih generator +, -, *, / " ;
    cin >> aritmatika ;
    cout << "masukkan nilai kedua = ";
    cin >> b ;

    if (aritmatika == '+') {
        hasil = a+b;
    } else if (aritmatika == '-') {
        hasil = a-b;
    } else if (aritmatika == '*') {
        hasil = a*b;
    } else if (aritmatika == '/') {
        hasil = a/b;
    } else {
        cout << "inputan anda salah" << endl ;
    }

    cout << "\nhasil perhitungan = " ;
    cout << a << aritmatika << b << " = " << hasil << endl ; 




    cin.get() ;
    return 0 ;
}