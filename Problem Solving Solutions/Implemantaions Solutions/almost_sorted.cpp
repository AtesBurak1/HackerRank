#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'almostSorted' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void almostSorted(vector<int> arr) {
    int error1=0,error2=0,errc=0;
    vector <int> a(arr.size(),1);
    vector <int> sorted(arr.begin(),arr.end());
    sort(sorted.begin(),sorted.end());
    for(int i=0; i < arr.size(); i++){
        if(arr[i] != sorted[i]){
            if(!error1){
                error1 = i+1;
            }else if(!error2){
                error2=i+1;
            }
            errc++;
            a[i]=0;
        }
    }
    if(errc == 0)
        cout<< "yes" << endl;
    if(errc == 2){
        cout << "yes" << endl << "swap " << error1 << " " << error2 << endl; 
    }else{
        int flag=0,index1=0,index2=arr.size()-1;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 0 && flag == 0){
                    index1 = i;
                    flag =1;
                
            }else if(flag==1 && a[i] == 0){
                    index2=i;
 
            }
        }
        if(flag == 2 || flag==1){
            int k=1;
            reverse(arr.begin()+index1,arr.begin()+index2+1);
            for(int i=0; i < arr.size(); i++){
                    if(arr[i ] != sorted[i]){
                    k=0;
                    //cout << index1 << index2;
                    break;
                    }
            }
            if(k){
                cout << "yes" << endl << "reverse " << index1+1 << " " << index2+1 << endl;
            }else{
                cout << "no";
            }
            
        }
    }
    
    
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    almostSorted(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
