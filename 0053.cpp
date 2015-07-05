#include <iostream>

/* ===============================
 *         eXcript.com
 *        fb.com/eXcript
 * ===============================
 */

using namespace std;

int main() {

    double preco[10] = {1,2,3};

    preco[0] = 14.55;
    preco[2] = 9.68;
    preco[3] = 1.1;
    preco[7] = 2;

    for(int i = 0; i<=9; i++){
//        preco[i] = 0;
        cout << preco[i] << endl;
    }

//    >14.55
//    3.26219e+257
//    >9.68
//    >1.1
//    3.34157e+257
//    1.7881e-307
//    2.0746e-317
//    >2
//    6.95314e-308
//    -1.24796e+077


    return 0;
}