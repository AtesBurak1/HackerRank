#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
     
}

int main()
{
    
    int n,j,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
         for(j=n-1;j>=0;j--)
         {
             if(j>=i)
             {
                cout << " ";
             }
             else if(i>j) 
             {
                cout << "#";
             }
         }
         cout << "\n";
     }
    


    return 0;
}

