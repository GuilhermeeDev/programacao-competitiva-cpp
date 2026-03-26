#include <iostream>
using namespace std;
int main (){
    int num, a, b, c, d;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> a >> b >> c >> d;
        if (a == b && a == c && a == d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}