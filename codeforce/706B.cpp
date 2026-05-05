#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i<n; i++) cin >> l[i];
    
    sort(l.begin(), l.end());

    cin >> c;
    while (c--){
        int x;
        cin >> x;

        int c = upper_bound(l.begin(), l.end(), x) - l.begin();
        cout << c << endl;
    }
    return 0;
}