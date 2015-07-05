#include <iostream>
#include <stdlib.h>

/*========================
        eXcript.com
      fb.com/eXcript
========================*/

using namespace std;

int main(){

    cout << "Digite um numero: " << endl;
    int i = 0;
    cin >> i;

    string texto = (i<=10) ? " menor do que dez " : " maior do que dez ";

    cout << "O valor digitado anteriormente eh: " << texto << endl;


    system("pause");
    return 0;
}