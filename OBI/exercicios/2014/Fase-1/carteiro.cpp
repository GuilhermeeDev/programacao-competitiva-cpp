#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector <int> cs(n);
    vector <int> od(m);
    for (int i = 0; i<n; i++) cin >> cs[i];
    for (int i = 0; i<m; i++) cin >> od[i];

    unordered_map<int, int> pos;
    for (int i=0;i<n;i++) pos[cs[i]] = i;
    int at = 0;
    long t = 0;
    for (int i=0; i<m; i++) {
        int ds = pos[od[i]];
        t+= abs(at - ds);
        at = ds;
    }
    cout << t << endl;
}