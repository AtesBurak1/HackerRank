#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,k,t;
    scanf("%d", &n);
    k=n;
    t=2*n-1;
  	for(int i=0;i<t;i++)
      {
          for(int j=0;j<t;j++)
          {
            if(i<=n-1)
            {
                if(i==0 )
                {
                    printf("%d ",n);
                }
                if(i>=1)
                {
                    if(j<i)
                    {
                        printf("%d ",k-j);
                    }
                    else if(j>=i && j<t-i)
                    {
                        printf("%d ",k-i);
                    }
                    else 
                    {
                        printf("%d ",j-k+2);
                    }  
                }
            }
            else if(i==n-1)
            {
                if(j<n)
                {
                    printf("%d ",k-j);
                }
                else
                {
                    printf("%d ",j-k+2);
                }
            }
            else if(i>n-1)
            {
                int x = t-i-1;
                if(i==t)
                {
                    printf("%d ",k);
                }
                if(j<x)
                {
                    printf("%d ",k-j);
                }
                else if(j>=x && j<t-x)
                {
                    printf("%d ",k-x);
                }
                else 
                {
                    printf("%d ",j-k+2);
                }    
            }
              
              
              
          }
          printf("\n");
      }
    return 0;
}
