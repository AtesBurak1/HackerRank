#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

  char c,string[100],line[100];
  scanf("%c",&c);
  scanf("%s",&string);
  scanf("\n");
  scanf("%[^\n]",&line);
  printf("%c\n%s\n%s",c,string,line);
    
    return 0;
}
