#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000],x;
    scanf("%[^\n]", s);
 
    
    for(int i=0;i<strlen(s);i++)
        {
            x=s[i];
            if(x == ' ')
            {
                printf("\n");
            }
            else 
            {
                printf("%c",x);
            }

        }  
    
    return 0;
}
