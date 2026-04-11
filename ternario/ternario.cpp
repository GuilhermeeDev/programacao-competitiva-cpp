#include <bits/stdc++.h>
using namespace std;
int main() {
    // c = casas decimais, r = resto
    int n,r,c=0,soma=0;
    cin >> n;
    while (n!=0){
        r = n%3;
        n/=3;
        cout << "Resto: " << r << " N: " << n << endl;
        soma+=r*pow(10,c);
        c+=1;
    }
    cout << soma << endl;
    return 0;
}