#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 1010

int s;
int ar[N];
void print() {
    for (int i = 0; i < s - 1; i ++) cout << ar[i] << ' ';
    cout << ar[s - 1] << endl; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> s;
    for (int i = 0; i < s; i ++) cin >> ar[i];
    for (int i = 1; i < s; i ++) {
        int val = ar[i], pre = i - 1;
        while (pre >= 0 && ar[pre] > val) {
            ar[pre + 1] = ar[pre];
            pre --;
        }
        ar[pre + 1] = val;
        
    }
    print();
    return 0;
}
