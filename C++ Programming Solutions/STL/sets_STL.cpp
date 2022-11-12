#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n,q,x;
    set<int> myset;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >>q >> x;
        switch(q){
            case 1:
                myset.insert(x);
                break;
            case 2:
                myset.erase(x); 
                break;
            case 3:
                set <int>::iterator it=myset.find(x);
                if(it == myset.end())
                {
                    cout << "No" << endl;
                }
                else 
                {
                   cout << "Yes" << endl;
                }
                break;
        }
    } 
    return 0;
}



