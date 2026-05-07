#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, im, pa;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (i%2 == 0) pa+=s[i];
        else im+=s[i];
    }

    cout << pa << endl;
    cout << im << endl;
    return 0;
}