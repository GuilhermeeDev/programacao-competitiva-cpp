#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont = 0;
    cin >> n;
    for (int j = 3; j>=0; j--){
        if (n>=pow(2,j)) n-=pow(2,j), cont+=1;
        cout << n << endl;
    }
    cout << cont << endl;
    return 0;
}