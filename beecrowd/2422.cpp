#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, soma;
    cin >> n;

    vector<int> lista(n);
    for (int i = 0; i<n; i++) cin >> lista[i];

    cin >> soma;

    sort(lista.begin(), lista.end());

    int i = 0, j = n-1;
    while (i < j){
        int s = lista[i] + lista[j];
        if (s == soma){
            cout << lista[i] << " " << lista[j] << endl;
            break;
        }else if (s < soma) {
            i++;
        } else {
            j--;
        }
    }
    return 0;
}