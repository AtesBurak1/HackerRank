#include <bits/stdc++.h>

using namespace std;

int N, K;
int A[100000];

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> N >> K;
        memset(A, -1, sizeof A);
        bool bad=false;
        for(int i=0; i<N; i++)
        {
            if(i-K>=0 && A[i-K]==-1)
                A[i-K]=i;
            else if(i+K<N && A[i+K]==-1)
                A[i+K]=i;
            else
                bad=true;
        }
        if(bad)
            cout << "-1" << endl;
        else
        {
            for(int i=0; i<N; i++)
                cout <<A[i]+1 << " ";
            cout << endl;
        }
    }
    return 0;
}
