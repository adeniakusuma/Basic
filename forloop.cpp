#include <iostream>

using namespace std ;

int main () {

    cout << "loop 1" << endl ;
    for ( int a = 5 ; a <= 25 ; a+=5){
        cout << a << endl ;
    }

    cout << "loop 2" << endl ;
    for ( int a = 2 ; a >= -20 ; a-=4) {
        cout << a << endl ;
    }

    cout << "loop 3" << endl ;
    int total = 0 ;
    for ( int a = 3 ; a <=15 ; a+=3, total += a) {
        cout << a << "||" << total << endl ;
    }
    cin.get() ;
    return 0 ;
}