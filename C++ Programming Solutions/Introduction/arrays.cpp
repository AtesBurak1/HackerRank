#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,num,i=0;
    
    scanf("%d",&N);
    int tempN = N;
    int array[N];
    for(; N>=0; N--){
        scanf("%d",&num);
        array[N-1]= num;
         }
         
    for(int i=0;i<tempN; i++){
    printf("%d ",array[i]);
    }
    
    return 0;
}
