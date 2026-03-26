#include <iostream>
using namespace std;

int main(){
    int N, t1 = 0, t2 = 1;
    cin >> N;

    for (int i = 1; i <= N; i++){
        cout << t1;
        if (i < N) cout << " ";

        int prox = t1 + t2;
        t1 = t2;
        t2 = prox;
    }

    cout << "\n";
    return 0;
}