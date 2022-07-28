#include <iostream>

using namespace std ;

int main (){

    for ( int a = 2 ; a <=8 ; a ++) {
       if ( a == 4) {
           //break ; //fungsi dibawahnya tidak dilanjutkan
           continue ; //lanjutkan loopnya, namun 4 tidak di print
       } 
        cout << a << endl ;
    }

/*
    //bisa menggunakan while
    int b = 1 ;
    while ( b <=7 ) {
        b++ ; //kalau menggunakan while dengan contine dan break, fungsi ini diletakkan diatas
        if ( b == 4){
            //break ;
            continue;
        }
        cout << b << endl ;
    }
*/
    cin.get() ;
    return 0 ;
}