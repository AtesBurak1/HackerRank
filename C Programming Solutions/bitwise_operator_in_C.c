#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max1=0,l=0;
    int max2=0;
    int max3=0;
 
  for(int h=1;h<=n;h++)
  {int m=1;
    
  for(int j=h+1;j<=n;j++)
  {    
      int q= (h & j);
      int w = (h| j);
      int e =h ^ j;
     
      if(q>max1 && q<k )
      {
          max1= q;
      }
      if(w >=max2 && w<k)
      {
          max2 =w;
      }
      if(e >=max3 && e<k)
      {
          max3 =e;
      }
     
  }

  }
  printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
