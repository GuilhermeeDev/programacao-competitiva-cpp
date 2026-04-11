#include <bits/stdc++.h>
using namespace std;

int sobreviventes(int n, int s){
    if (n == 1) return 0;
    return (sobreviventes(n-1,s)+s)%2;
}

int main(){
    int nc, n, s;
    cin >> nc;
    for (int i= 0; i<nc;i++){
        cin >> n >> s;
        cout << "Case " << i << ": " << sobreviventes(n,s)+1 << endl;
    }
    return 0;
}