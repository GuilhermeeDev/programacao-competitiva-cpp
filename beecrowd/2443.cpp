#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ba = b*d, ci = a*d + c*b;
    int g = __gcd(ba, ci);
    
    cout << ci/g << " " << ba/g << endl;
    return 0;
}