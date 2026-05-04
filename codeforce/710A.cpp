#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int mov = 8;
    if (s[0] == 'a' || s[0] == 'h') mov-=3;
    if (s[1] == '1' || s[1] == '8') mov-=3;
    if ((s[0] == 'a' || s[0] == 'h') && (s[1] == '1' || s[1] == '8')) mov+=1; 

    cout << mov << endl;
    return 0;
}