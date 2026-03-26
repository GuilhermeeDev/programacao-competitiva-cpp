#include <iostream>
using namespace std;
int main(){
    int id;
    cin >> id;

    int anos = (id/365);
    int meses = (id%365)/30;
    int dias = ((id%365)%30);

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl; 
    return 0;
}