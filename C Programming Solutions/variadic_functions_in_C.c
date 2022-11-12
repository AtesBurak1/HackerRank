#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int greater1 (int x,int y){
    
    if(x>=y){ return x;}
    return y;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int first=greater1(a,b);
    int sec=greater1(c,d);
    int ans = greater1(first, sec);
    printf("%d", ans);
    
    return 0;
}
