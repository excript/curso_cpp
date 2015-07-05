#include <iostream>
#include <stdlib.h>

/* ===============================
 *         eXcript.com
 *        fb.com/eXcript
 * ===============================*/

using namespace std;

int main() {

    //1) criar uma planilha com valores aleatórios
    //2) soma dos valores de cada linha
    //3) soma da soma dos valores de cada linha

    double plan[5][6] = {};

//  gerando a planilha
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            plan[x][y] = (double)rand() / RAND_MAX;
        }
    }

//  calculo dos valores
    double total = 0;
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            plan[x][5] += plan[x][y];
        }
        total += plan[x][5];
    }

//  imprimindo a planilha
//  0, 0, 0, 0, 0 = 0.0
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 6; y++){
            string end = (y<4) ? ", " :
                         (y<5) ? " = " : "\n";
            cout << plan[x][y] << end;
        }
    }

    cout << "O valor da soma é: " << total << endl;
    return 0;
}



