#include <bits/stdc++.h>
using namespace std;

int main(void){
    string pA, cB, pB, cA;
    cin >> pA >> cB >> pB >> cA;

    int p = pA.find(":");
    int pAm = stoi(pA.substr(0,p)) * 60 + stoi(pA.substr(p+1));

    p = cB.find(":");
    int cBm = stoi(cB.substr(0,p)) * 60 + stoi(cB.substr(p+1));

    p = pB.find(":");
    int pBm = stoi(pB.substr(0,p)) * 60 + stoi(pB.substr(p+1));

    p = cA.find(":");
    int cAm = stoi(cA.substr(0,p)) * 60 + stoi(cA.substr(p+1));

    // diferenças
    int d1 = cBm - pAm;
    if (d1 < 0) d1 += 1440;

    int d2 = cAm - pBm;
    if (d2 < 0) d2 += 1440;

    int duracao = (d1 + d2) / 2;
    int fuso = (d1 - d2) / 2;

    // ajuste do fuso
    if (fuso < -720) fuso += 1440;
    if (fuso > 720) fuso -= 1440;

    cout << duracao << " " << (fuso/60)+(duracao/60) << endl;
}