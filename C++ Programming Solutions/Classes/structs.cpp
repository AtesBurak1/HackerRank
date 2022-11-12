#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    char *first_name[49];
    char *last_name[49];
    int standard;
};
int main() {
    Student st;
    
    scanf("%d %s %s %d",&st.age,&st.first_name,&st.last_name,&st.standard);
    
    printf("%d %s %s %d",st.age,st.first_name,st.last_name,st.standard);
    
    return 0;
}
