#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float s;
    cin >> s;
    if (s<=400.0) {
        cout << "Novo salario: " << fixed << setprecision(2) << (s*0.15)+s << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << ((s*0.15)+s)-s << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (s > 400.0 && s<=800.0) {
        cout << "Novo salario: " << fixed << setprecision(2) << (s*0.12)+s << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << ((s*0.12)+s)-s << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (s > 800 && s<=1200.0) {
        cout << "Novo salario: " << fixed << setprecision(2) << (s*0.10)+s << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << ((s*0.10)+s)-s << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (s > 1200.0 && s<=2000.0) {
        cout << "Novo salario: " << fixed << setprecision(2) << (s*0.07)+s << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << ((s*0.07)+s)-s << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else {
        cout << "Novo salario: " << fixed << setprecision(2) << (s*0.04)+s << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << ((s*0.04)+s)-s << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}