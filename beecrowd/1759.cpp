#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
 
    int N;
    cin >> N;
    
    for (int i=1; i<=N;i++){
        cout << "Ho";
        if (i < N) cout << " ";
        if (i == N) cout << "!";
    }
    cout << "\n";
    return 0;
}