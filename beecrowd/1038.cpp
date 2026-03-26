#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int id,q;
    cin >> id >> q;

    if (id == 1) cout << "Total: R$ " << fixed << setprecision(2) << q*4.00 << endl; 
    else if (id == 2) cout << "Total: R$ " << fixed << setprecision(2) << q*4.50 << endl;
    else if (id == 3) cout << "Total: R$ " << fixed << setprecision(2) << q*5.00 << endl;
    else if (id == 4) cout << "Total: R$ " << fixed << setprecision(2) << q*2.00 << endl;
    else cout << "Total: R$ " << fixed << setprecision(2) << q*1.50 << endl;
    return 0;
}