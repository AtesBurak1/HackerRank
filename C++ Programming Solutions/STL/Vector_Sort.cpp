#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
   int n;
   vector<int> vec;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       int a;
       scanf("%d",&a);
       vec.push_back(a);
   } 
   sort(vec.begin(),vec.end());
   for(int j=0;j<vec.size();j++){
    cout << vec[j]<< " ";
   }
    return 0;
}
