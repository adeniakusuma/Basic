#include <iostream>

using namespace std ;

double luas (double p, double l) {
    double luas = p*l ;
    return luas;
}

double keliling (double p, double l) {
    double keliling = 2 * (p+l) ;
    return keliling ;
}

void show_luas (double p, double l) {
    cout << "luasnya adalah = ";
    cout << luas(p,l) ;
}

void show_keliling (double p, double l) {
    cout << "kelilingnya adalah = " ;
    cout << keliling(p,l) ;
}

int main () {

    double panjang, lebar ;
    cout << "panjang = " ;
    cin >> panjang;
    cout << "lebar = " ;
    cin >> lebar ;

    show_keliling (panjang, lebar);
    cout << endl ;
    show_luas (panjang, lebar) ;

    //cout << "luasnya adalah = " ;
    //cout << (luas(panjang,lebar)) << endl ;
    //cout << "kelilingnya adalah = " ;
    //cout << (keliling(panjang,lebar)) << endl ;

    return 0 ;
}