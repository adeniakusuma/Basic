#include <iostream>
#include <cstdlib> //mengandung fungsi random

using namespace std ;

int main () {

    char lanjut ;
    while (true)
    {
        cout << "mix the dice (y/n) = " ;
        cin >> lanjut ;

        if (lanjut == 'y'){
            cout << 1 + (rand()%6) << endl ; 
        } else if (lanjut == 'n') {
            break ;
        } else {
            cout << "input is not valid" << endl ;
        }
    } 
    

    cin.get() ;
    return 0 ;
}