// 2,3,4,1
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    double m = ((a*2)+(b*3)+(c*4)+d)/10;
    cout << "Media: " << fixed << setprecision(1) << m << endl;

    if (m >= 7.0) cout << "Aluno aprovado." << endl;

    else{
        if (m < 5.0) cout << "Aluno reprovado." << endl;
        else {
            cout << "Aluno em exame." << endl;
            double ex;
            cin >> ex;
            cout << "Nota do exame: " << fixed << setprecision(1) << ex << endl;
            if ((m+ex)/2 >= 5.0) {
                cout << "Aluno aprovado." << endl;
                cout << "Media final: " << fixed << setprecision(1) << (m+ex)/2 << endl;
            }
            else cout << "Aluno reprovado." << endl;
        }
        return 0;
    }
}