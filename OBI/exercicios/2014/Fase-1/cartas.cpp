#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if (a<b && b<c && c<d && d<e) printf("C");
    else if (a>b && b>c && c>d && d>e) printf("D");
    else printf("N");
}