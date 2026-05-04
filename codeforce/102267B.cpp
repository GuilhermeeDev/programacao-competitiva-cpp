//TLE

#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int n) {
    if (n < 2) return false;

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i < n; i++) {
        int outro = n - i;

        if (eh_primo(i) && eh_primo(outro)) {
            cout << i << " " << outro << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}