#include <iostream>
#include <stdlib.h>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    int total = 0;
    int menuOpcao1 = 0;
    do{
        cout << "Seja bem-vindo a Power-Calculator" <<endl;
        cout << "========== Menu principal ==========" <<endl;
        cout << "\t0 - sair do  programa" <<endl;
        cout << "\t1 - calculadora" <<endl;
        cout << "menu> ";
        cin >> menuOpcao1;
        cout << "\t\t>> " <<menuOpcao1 <<" <<" <<endl;

        if(menuOpcao1 !=0){
            int menuInterno = 0;
            do{
                int valor = 0;
                system("CLS");
                cout << "\t0 - voltar ao menu principal" <<endl;
                cout << "\t1 - somar com" <<endl;
                cout << "\t2 - subtrair de" <<endl;
                cout << "\t3 - multiplicar com" <<endl;
                cout << "\t4 - dividir com" <<endl;
                cout << "\t5 - mostrar total" <<endl;
                cout << "Total> " <<total <<endl;
                cout << "Digite a opcao desejada>"<<endl;
                cout << "menu> ";
                cin >> menuInterno;
                if(menuInterno!=5 && menuInterno!=0) {
                    cout << "calc> " <<total <<(
                            (menuInterno == 1) ? " + " :
                                    (menuInterno == 2) ? " - " :
                                            (menuInterno == 3) ? " * " : " / ");
                    cin >> valor;
                }
                if(menuInterno!=0){
                    switch(menuInterno){
                        case 1:
                            total += valor;
                            break;
                        case 2:
                            total -= valor;
                            break;
                        case 3:
                            total *= valor;
                            break;
                        case 4:
                            total /= valor;
                            break;
                        case 5:
                            cout <<"\t\t=========================" <<endl;
                            cout <<"\t\tValor total> " <<total <<" <<" <<endl;
                            cout <<"\t\t=========================" <<endl;
                            break;
                    }
                }
            }while(menuInterno!=0);
        }

    }while(menuOpcao1!=0);

    return 0;
}