#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string s) {
    int k=0,l=0,u=0,p=0;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i] >= '0' && s[i] <= '9')
            l++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            u++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            p++;
        else {
            k++;
        }
    }
    if(k==0)
        ans++;
    if(u==0)
        ans++;
    if(l==0)
        ans++;
    if(p==0)
        ans++;
    if(6-s.length()>ans && s.length() <6)
        return 6-s.length();
    
    return ans;
        

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

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
