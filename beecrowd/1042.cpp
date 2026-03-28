#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int a,b,c,ai,bi,ci;
    cin >> a >> b >> c;
    ai = a;
    bi = b;
    ci = c;

    if (a >= b){
        if (b >= c){
            a = ci;
            c = ai;
        }
        else{
            a = bi;
            b = ci;
            c = ai; 
        }
    }

    else if (b >= c){
        if (a >= c){
            a = ci;
            b = ai;
            c = bi;
        }
        else {
            a = ai;
            b = ci;
            c = bi;
        }
    }

    else{
        a = ai;
        b = bi;
        c = ci;
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << " " << endl;
    cout << ai << endl;
    cout << bi << endl;
    cout << ci << endl;
    return 0;
}
