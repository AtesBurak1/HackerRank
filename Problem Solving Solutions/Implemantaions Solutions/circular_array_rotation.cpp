#include <bits/stdc++.h>

using namespace std;

int main(){
     int n, k, q;
    while (scanf("%d %d %d", &n, &k, &q) != EOF) {
        int as[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &as[i]);
        }
        for (int i = 0; i < q; i++) {
            int x;
            scanf("%d", &x);
            x -= k;
            while (x < 0) x += n;
            printf("%d\n", as[x]);
        }
    }
   
    
    return 0;
}
