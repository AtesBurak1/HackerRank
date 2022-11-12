#include <iostream>
#include <cstdio>
using namespace std;

int max_four(int a,int b,int c,int d){
    int max;
    if(a>=b){
        if(c>=d){
            if(a>=c){
                cout << a << endl;
            }else{
                cout << c << endl;
            }
        }else if(a>=d){
            cout << a << endl;
        }else{
            cout << d << endl;
        }
        
    }else if(c>=d){
        if(b>=c){
            cout << b << endl;
        }else{
            cout << c << endl;
        }
    }else{
        if(b>=d){
            cout << b << endl;
        }else{
            cout << d << endl;
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_four(a,b,c,d);
   
    return 0;
    
}
