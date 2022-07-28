#include <iostream>

using namespace std ;

int kuadrat(int x) {
    int y ;
    y = x*x ;
    return y ;
}

//diatas ini adalah fungsi yg akan digunakan dibawah
//nama fungsi diatas adalah kuadrat
//gampangnya = membuat fungsi sendiri tanpa harus menggunakan berbagai library

int main () {

    int input, hasil;
    cout << "nilai kuadrat dari : " ;
    cin >> input ;

    hasil = kuadrat(input);
    cout << hasil << endl ;

    cin.get() ;
    return 0 ;
}