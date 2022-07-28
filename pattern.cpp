#include <iostream>

using namespace std ;

int main () {

    cout << "\nLATIHAN MEMBUAT PATTERN\n" << endl ;

    int n= 5 ;
    //cout << "masukkan panjang pola = " ; 
    //cin >> n ;

    cout << "\nPATTERN 1" << endl ;

    for ( int i = 1 ; i <= n ; i++) {
        for ( int j = 1 ; j <= i ; j++) { //loop didalam loop
            cout << "*" ;
        }
        cout << endl ;
    }

    cout << "PATTERN 2" << endl ;

    for (int i = 1 ; i <= n ; i++) {
        for ( int j = n ; j >= i ; j-- ) {
            cout << "*" ;
        }
        cout << endl ;
    }

    cout << "PATTERN 3" << endl ;
    for ( int i = 1 ; i <= n ; i++){
        for( int j = n ; j > i ; j--){
            cout << " " ;
        }
        for( int j = 1 ; j <= i ; j++){
            cout << "*" ;
        }
        cout << endl ;
    }

    cout << "PATTERN 4" << endl ;
    for ( int i = 1 ; i <= n ; i++ ){
        for( int j = 1 ; j < i ; j++ ) {
            cout << " " ;
        }
        for(int j = n ; j >= i ; j--) {
            cout << "*" ;
        }
        cout << endl ;
    }

    cout << "PATTERN 5" << endl ;
    for (int i = 1 ; i <= n ; i++) {
        for ( int j = n ; j > i ; j--) {
            cout << " " ;
        }
        for ( int j = 1 ; j <= (i*2-1) ; j++ ) {
            cout << "*" ;
        }
        cout << endl ;
    }

    cout << "PATTERN 6" << endl ;
    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = 1 ; j < i ; j++) {
            cout << " " ;
        }
        for ( int j = n ; j >= (2*i-n) ; j--) {
            cout << "*" ;
        }
        cout << endl ;
    }

    cout << "PATTERN 7" << endl ;
    for (int i = 1 ; i <= n ; i++) {
        for ( int j = n ; j > i ; j--) {
            cout << " " ;
        }
        for ( int j = 1 ; j <= (i*2-1) ; j++ ) {
            cout << "*" ;
        }
        cout << endl ;
    }
    for ( int i = 2 ; i <= n ; i++ ) {
        for ( int j = 1 ; j < i ; j++) {
            cout << " " ;
        }
        for ( int j = n ; j >= (2*i-n) ; j--) {
            cout << "*" ;
        }
        cout << endl ;
    }
    
    cin.get() ;
    return 0 ;
}