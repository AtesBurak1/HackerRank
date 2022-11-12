#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char x;
    double d;
    float f;
    scanf("%d %ld %c%f%lf",&a,&b,&x,&f,&d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,b,x,f,d);
    return 0;
}
