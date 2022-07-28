#include <iostream>

using namespace std ;
 

//ini yang disebut dengan prototype
double hitung_luas (double p, double l) ;
void println(double x) ;

int main (){

    double panjang, lebar,luas ;
    cin >> panjang ;
    cin >> lebar ;

    luas = hitung_luas (panjang,lebar);
    println (luas) ;

    return 0;
}

//tapi fungsinya ada dibawah sini,
//tidak apa apa diletakkan dibawah karna diatas sudah ada prototypenya
double hitung_luas (double p, double l) {
    return p*l ;
}

void println (double x) {
    cout << "hasil = " << x << endl ;
}