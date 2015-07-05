#include <iostream>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

using namespace std;

int main() {
    int n = 0;
    while(true){
        n++;

        if(n>=10) {
            break;
        }
        else {
            if(n==4 or n==6)
                continue;
        }

        cout << n << endl;
    }

    system("pause");
    return 0;
}