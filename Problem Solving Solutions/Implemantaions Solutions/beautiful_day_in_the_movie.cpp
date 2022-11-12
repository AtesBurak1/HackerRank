#include <bits/stdc++.h>

using namespace std;
int reverse(int num){
    int temp = 0;
    while(num > 0){
        temp *= 10;
        temp += num%10;
        num /=10;
    }
    return temp;
    
}
int solve(int i,int j, int k){
    int ans = 0;
    for (; i <=j; i++){
        if(abs(i - reverse(i))%k == 0)
            ans++;
    }
    return ans;
}
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << solve(x,y,z);
    return 0;
}
