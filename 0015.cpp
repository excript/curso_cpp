#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    cout << "Informe um numero: " << endl;
    int num1 = 0;
    cin >> num1;

    cout << "Informe outro numero: " << endl;
    int num2 = 0;
    cin >> num2;

    cout << "Os numeros digitos foram: "
            << num1
            << " e "
            << num2
            << endl;

    system("pause");

    return 0;
}