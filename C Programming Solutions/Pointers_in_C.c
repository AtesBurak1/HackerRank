#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update(int *a,int *b) {
    
    int tempa= *a;
    *a =  *a + *b;
    *b =  abs(tempa-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
