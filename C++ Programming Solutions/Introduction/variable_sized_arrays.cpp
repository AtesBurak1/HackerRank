#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#include <iostream>

using namespace std;

int main() {

    int num_of_array, num_of_out, len, bir, iki;
    int *ptr, **arr;


    cin >> num_of_array;
    cin >> num_of_out;

    arr = (int **)malloc(sizeof(int *) *num_of_array);



    for(int i=0; i<num_of_array; i++) {
        int num;
        cin >> len;
        ptr=(int*)malloc(sizeof(int)*len);
        for(int j=0; j<len; j++) {
            cin >> num;
            ptr[j]=num;


        }

        arr[i]=ptr;
    }

    for(int i=0; i<num_of_out; i++) {

        cin >> bir;
        cin >> iki;


        cout << arr[bir][iki] << endl;

    }






    return 0;
}
