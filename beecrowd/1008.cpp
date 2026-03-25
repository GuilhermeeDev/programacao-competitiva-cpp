#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int a,b;
    double c;
    cin >> a;
    cin >> b;
    cin >> c;
    double s = b * c;
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << s << endl;   
}