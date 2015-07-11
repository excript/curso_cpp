#include <iostream>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variavel varInt é: " << varInt << endl;
    cout << "O valor da variavel c é: " << c << endl;
    cout << "O valor da variavel pFlutuante é: " << pFlutuante << endl;
    cout << endl;
    cout << "Memória da variavel varInt: " << sizeof(varInt) << "bytes" << endl;
    cout << "Memória da variavel c: " << sizeof(c) << "bytes" << endl;
    cout << "Memória da variavel pFlutuante: " << sizeof(pFlutuante) << "bytes" << endl;


    return 0;
}
