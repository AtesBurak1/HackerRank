#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    stack <char> a;
    for(int i=0; i<s.length();i++){
        if(a.empty())
            a.push(s[i]);
        else if(a.top() == s[i]){
            a.pop();
        }else {
            a.push(s[i]);
        }
    }
    if(a.empty())
        return "Empty String";
    string k="";
    string l="";
    while(!a.empty()){
        k+=a.top();
        a.pop();
    }
    for(int i=k.size()-1; i >=0; i--)
        l+=k[i];
    return l;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
