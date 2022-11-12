#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int add1(int a,int b,int c,int d,int e)
{
    int arm[1]={};
    arm[0]=a;
    if(b>arm[0])
            {
                arm[0]=b;
            }
    if(c>arm[0])
            {
                arm[0]=c;
            }
    if(d>arm[0])
            {
                arm[0]=d;
            }
    if(e>arm[0])
            {
                arm[0]=e;
            }
    return arm[0];
}
int migratoryBirds(vector<int> arr) {
    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
            a++;
        else if(arr[i]==2)
            b++;
        else if(arr[i]==3)
            c++;
        else if(arr[i]==4)
            d++;
        else
            e++;
    }
    int m=add1(a,b,c,d,e);
    if(m==a)
        return 1;
    if(m==b)
        return 2;
    if(m==c)
        return 3;
    if(m==d)
        return 4;
    if(m==e)
        return 5;
        return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

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
