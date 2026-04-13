#include <bits/stdc++.h>
using namespace std;

int main() {
    string di, hi, df, hf;

    getline(cin, di);
    getline(cin, hi);
    getline(cin, df);
    getline(cin, hf);

    int d1 = stoi(di.substr(4));
    int d2 = stoi(df.substr(4));

    int h1 = stoi(hi.substr(0,2));
    int m1 = stoi(hi.substr(5,2));
    int s1 = stoi(hi.substr(10,2));

    int h2 = stoi(hf.substr(0,2));
    int m2 = stoi(hf.substr(5,2));
    int s2 = stoi(hf.substr(10,2));

    int inicio = d1*86400 + h1*3600 + m1*60 + s1;
    int fim    = d2*86400 + h2*3600 + m2*60 + s2;

    int dur = fim - inicio;

    int dias = dur / 86400;
    dur %= 86400;

    int horas = dur / 3600;
    dur %= 3600;

    int minutos = dur / 60;
    int segundos = dur % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}