#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string aq= "abc";
	string stra,strb,c,tempa;
    int a,b;
    getline(cin,stra);
    getline(cin,strb);
    printf("%ld %ld",stra.size(),strb.size());
    c = stra + strb;
    cout <<"\n" << c << endl;
    tempa = stra;
    stra[0]=strb[0];
    strb[0]=tempa[0];
    cout << stra <<" " << strb;
    
  
    return 0;
}
