#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int original[3] = {a, b, c};
    int ordenado[3] = {a, b, c};

    sort(ordenado, ordenado + 3);

    for (int i = 0; i < 3; i++)
        cout << ordenado[i] << endl;

    cout << endl;

    for (int i = 0; i < 3; i++)
        cout << original[i] << endl;

    return 0;
}