#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    string a;
    double b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << (b+(c*0.15)) << endl;
}