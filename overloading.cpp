#include <iostream>

using namespace std ;

//overloading = menimpa
//overloading menyediakan nama fungsi yang berbeda dengan perhitungan berbeda


//basic function
int luas_kotak(int p, int l) {
    return p*l ;
}

//overload function
int luas_kotak(int p) {
    return p*p ;
}

double luas_kotak(double sisi) {
    return sisi*sisi ;
}

int main () {

    cout << "luas kotak = " << luas_kotak(2,3) << endl ; 
    //tergantung variabelnya dia akan memilikih menggunakan fungsi yangmana
    cout << "luas kotak = " << luas_kotak(3) << endl ;
    cout << "luas kotak = " << luas_kotak(3.3) << endl ;
}

