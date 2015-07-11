#include <iostream>
#include <stdlib.h>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    //Incremento = ++
    //Decremento = --

    cout << "Operador de incremento" << endl;
    int i = 0, i2 = 0;
    cout << "Pre = " << ++i << endl;//pre-incrementar
    cout << "Pos = " << i2++ << endl;//pos-incrementar
    cout << "Pos = " << i2 << endl;

    cout << endl;

    cout << "Operador de decremento" << endl;

    i = 0;
    i2 = 0;
    cout << "Pre = " << --i << endl;//pre-decrementar
    cout << "Pos = " << i2-- << endl;//pos-decrementar
    cout << "Pos = " << i2 << endl;

    system("pause");
    return 0;
}