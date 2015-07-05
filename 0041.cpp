#include <iostream>
#include <stdlib.h>

/*========================
        eXcript.com
      fb.com/eXcript
========================*/

using namespace std;

int main(){

    int i = 0;
    cout << "Digite um numero: " << endl;
    cin >> i;
    if(i==1)
        while(i<10){
            i++;
            cout << "Um frase qualquer" << endl;
        }
    else{
        cout << i*i << endl;
    }


    system("pause");
    return 0;
}