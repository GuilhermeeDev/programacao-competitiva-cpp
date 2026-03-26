#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a,b,c,del;
    cin >> a >> b >> c;

    del = (b*b)-(4*a*c);
    if (a == 0 || del < 0) cout << "Impossivel calcular" << endl;
    else {
        double r1,r2;
        r1 = (-b+sqrt(del))/(2*a);
        r2 = (-b-sqrt(del))/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }
}