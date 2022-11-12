#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    int a[26]={0};
    cout << 'Z' - 'A';
    for(int i=0; i<s.length(); i++){
        if(s[i] >='a' && s[i]<='z')
        {a[s[i]-'a']++;
        }
        else if(s[i] >='A' && s[i] <='Z')
            {a[s[i]-'A']++;
            }
        else {
            continue;
        }
    }
    for(int i=0; i< 26; i++){
        if(a[i]==0)
        return "not pangram";
    }
        
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
