#include <iostream>
#include <cmath>

/*
library cmath : refrensi -> www.cppreference.com
ceil(x) = pembulatan ke atas
cos(x) = cosinus
sin(x) = sinus
exp(x) = eksponen
fabs(x) = nilai absolut dalam flaot
floor(x) = pembulatan ke bawah
fmod(x) = modulus dalam float
log(x) = logaritma dengan basis natural
log10(x) = logaritma dengan basis 10
pow(x,y) = x pangkat y
sqrt(x) = akar kuadrat
tan(x) = tangen
 */

using namespace std ;

int main () {

    int x ;
    cout << "x = " ;
    cin >> x ;

    cout << "akar kuadrat dari " << x << " = " << sqrt(x)  << endl ;

    cin.get();
    return 0 ;
 }