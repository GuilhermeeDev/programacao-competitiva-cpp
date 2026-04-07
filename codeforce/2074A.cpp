#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int j,a,b,c,d;
    cin >> j;

    for (int i = 0; i<j;i++) {
        cin >> a >> b >> c >> d;
        if (a!=b || a!=c || a!=d) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}