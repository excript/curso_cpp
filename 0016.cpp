#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    short  a1 = 10;
    short int a2 = 10;//2 bytes
    int b = 10;//4 bytes
    long int c1 = 10;//4 bytes
    long c2 = 10;//4 bytes

    unsigned char c = 259;

    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c1) << endl;
    cout << sizeof(c2) << endl;

    float f1 = 2;
    long long f2 = 2;
    long double f3 = 2;
    cout << sizeof(f1) << endl;
    cout << sizeof(f2) << endl;
    cout << sizeof(f3) << endl;


    system("pause");
    return 0;
}


