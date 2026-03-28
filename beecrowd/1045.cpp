#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,ai,bi,ci;
    cin >> a >> b >> c;

    if (a<b) swap(a,b);
    if (a<c) swap(a,c);
    if (b<c) swap(b,c);
    
    if(a >= (b+c)) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if(pow(a,2) == pow(b,2)+pow(c,2)) cout << "TRIANGULO RETANGULO" << endl;
        if(a*a > b*b+c*c) cout << "TRIANGULO OBTUSANGULO" << endl;
        if(a*a < b*b+c*c) cout << "TRIANGULO ACUTANGULO" << endl;
        if (a == c && a == b) cout << "TRIANGULO EQUILATERO" << endl;
        if (a == b && a!=c || b == c && b!=a || a == c && a!=b) cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;

}