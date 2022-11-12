#include <bits/stdc++.h>

using namespace std;


void solve(long int n,long int l,long int k)
{
        cout << (l+k-2)%n +1 << endl;
}
int main()
{
    long int T,n,l,k;
    cin >> T;
    while(T--)
    {
        cin >> n >> l >> k;
        solve(n,l,k);
        
    }
    
    
    return 0;
}
