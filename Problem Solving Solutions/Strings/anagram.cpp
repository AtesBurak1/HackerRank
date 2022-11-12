#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
bool check(string &s){int i=0;int j=s.length()-1;int count=0;
     while ((i<j)&&(s[i]==s[j])){
         i++;
         j--;
         
     }
     if(i==s.length()/2){
         return true;
     }
      return false;}

int palindromeIndex(string s){int x=0;
    if(check(s)==true){
    x=-1;
}
else{int i=0;int j=s.length()-1;
while(i<j){
    if(s[i]!=s[j]){
        
        s.erase(j, 1);
        if(check(s)==true){
            x=j;
        }else{
            x=i;
        }
        break;
    }i++;j--;
}
        
}

return x;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

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
