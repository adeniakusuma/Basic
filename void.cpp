//fungsi void adalah fungsi tanpa kembalian
//jadi tidak perlu menggunakan return dalam programnya
//fungsi dengan return disebut dengan fungsi reporter
// kalau fungsi void disebut dengan fungsi worker

#include <iostream>

using namespace std ;

int kuadrat (int x) {
    int y ;
    y = x*x ;
    return y ;
}

void show (int input) {
    cout << input << endl ;
}

int main () {

    int input, hasil ;
    cout << "nilai kuadrat dari = " ;
    cin >> input ;
    hasil = kuadrat(input) ;
    show(hasil) ; //contoh penggunaan fungsi void
}