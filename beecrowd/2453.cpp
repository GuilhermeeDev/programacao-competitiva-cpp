#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,sum;
    getline(cin, a);
    for (int i = 0; i<a.size();i++) {
        if (a[i] == ' ') sum+=' ';
        else if (a[i] == 'p' && a[i+1] != ' ' && a[i+1] != 'p') sum+=a[i+1];
    }
    cout << sum << endl;

    return 0;
}