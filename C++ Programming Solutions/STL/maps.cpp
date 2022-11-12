#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n,mark=0,type;
    string name;
    map <string,int> student_map;
    
     cin >> n;
     for(int i=0;i<n;i++)
     {
         cin >> type;
         mark=0;
         switch (type) {
            case 1:{
                cin >> name >> mark;
                student_map[name] += mark;
                break;
            }
            case 2:
                cin >> name;
                student_map.erase(name);
                break;
            case 3:
                cin >> name;
                cout << student_map[name] << endl;
                break;
         }
         
     }
    return 0;
}



