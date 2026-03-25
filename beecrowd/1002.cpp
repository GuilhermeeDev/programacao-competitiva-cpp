#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double r;
    cin >> r;
    cout << "A=" << fixed << setprecision(4) <<((r*r)*3.14159) << endl;
}