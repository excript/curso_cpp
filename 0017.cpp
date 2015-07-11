#include <iostream>
#include <stdlib.h>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    int x, y;
    x = 3;
    y = 9;

    cout << "O valor de x e y é: " << x << ", " << y << endl;

    cout << "A soma entre x e y é: " << x + y << endl;
    cout << "A subtração entre x e y é: " << x - y << endl;
    cout << "A multiplicação entre x e y é: " << x * y << endl;

    double d = y / (x+1.0);
    cout << "A divisão entre x e y é: " << d << endl;

    system("pause");
    return 0;
}