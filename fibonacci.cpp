#include <iostream>

using namespace std ;

int main () {

    cout << "\nLATIHAN DERET FIBONACCI\n" << endl ;

    // rumus finonacci -> f(n) = f(n-1) + f (n-2)
    
    int n ;
    int f_n ; //f(n)
    int f_n1 ; //f(n-1)
    int f_n2 ; //f(n-2)

    cout << "masukkan nilai n = " ;
    cin >> n ;

    f_n1 = 1 ; // untuk declare nilai awal si f_n1
    f_n2 = 0 ;
    cout << f_n1 << endl ; //print nilai awal di awal deret
    for ( int i = 1 ; i < n ; i++) {
        f_n = f_n1 + f_n2 ; // rumus fibonacci
        f_n2 = f_n1 ;
        f_n1 = f_n ;
        cout << f_n << endl ;
    }
    

    cin.get ();
    return 0 ;
}