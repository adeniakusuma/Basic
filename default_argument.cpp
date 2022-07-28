#include <iostream>

using namespace std ;

double volume_kubus (double p =2, double l=3, double t =4) ;
//kalau menggunakan fungsi prototype maka default nilainya harus diletakkan di prototype diawal/diatas sebelum main
//bukan fungsi dibawah main

int main () {
    cout << "volume kubus = " << volume_kubus(2,3,4) << endl ;
    cout << "volume kubus = " << volume_kubus(2,3) << endl; //kalau kurang 1 variable maka akan digantikan variable default
    cout << "volume kubus = " << volume_kubus(2) << endl ; //menggantikan 2 variable
    cout << "volume kubus = " << volume_kubus() << endl ; //menggantikan 3 variable

}

double volume_kubus (double p, double l, double t) {
    return p*l*t ;
}