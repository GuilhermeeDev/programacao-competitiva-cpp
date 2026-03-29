#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float s, r,i;
    cin >> s;
    if (s <= 2000.0) cout << "Isento" << endl;
    else {
        r = s-2000.0;
        if (r > 1000.0) {
            i = 1000.0*0.08;
            r -= 1000.0;
            if (r <= 1500.0) {
                i += r*0.18;
            } else {
                i += 1500.0*0.18;
                r -= 1500.0;
                if (r > 0) i += r*0.28;
            }
        }
        else {
            i += r*0.08;
        }
        cout << "R$ " << fixed << setprecision(2) << i << endl;
    }
    return 0;
}