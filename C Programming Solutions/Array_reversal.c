#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,k=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int arr2[1000]={};
    for(int j=num-1; j>=0;j--)
    {
        arr2[j]= arr[k];
        k++;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
    return 0;
}
