#include <iostream>
#include <stdlib.h>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    //1) Perguntar qual a tabuada para o usuario
    //   e armazenar o valor numa variavel

    cout << "Por favor, informe a tabuada que voce deseja: " << endl;

    int n = 0;
    cin >> n;

    //2) Implementação de um laço de repetição FOR
    for(int i = 1; i<=10; i++){
        //3) Imprimir a tabuada na tela
        cout << i << " x " << n << " = " << i*n << endl;
    }


    system("pause");
    return 0;
}