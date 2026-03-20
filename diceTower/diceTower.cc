#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int count, resto, n, num;
    cin >> count;

    vector<int> vetor(count);

    for (int &x : vetor) cin >> x;

    for (int i=0; i<count; i++){
        n = vetor[i];
        resto = n % 14;
        if (resto <= 6){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

