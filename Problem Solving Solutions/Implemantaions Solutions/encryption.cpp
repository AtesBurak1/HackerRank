#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    int l=0,flag1=0,flag2=0,col,row;
    vector <vector <char> > str;
    vector <char>  str2;
    string res;
    for(l=0;l<s.length();l++)
    {
        if(l*l>s.length())
        {
            flag1=1;
            break;
        }
        else if(l*l==s.length())
        {
            flag2=1;
            break;
        }
    }
    if(flag1)
    {
        if(l*(l-1)>=s.length())
        {
            col=l;
        row=l-1;
        }
        else {
        
        col=l;
        row=l;
        }
    }
    else if(flag2){
        col=l;
        row=l;
    }
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(s[count]!=' ')
            {
                str2.push_back(s[count]);
            }
            else {
             j--;
            }
            if(count!=s.length()-1)
            {
                count++;
            }
            else {
                break;
            }
        }
        str.push_back(str2);
        str2.clear();
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(str[j][i]>='a' && str[j][i]<='z' && (i+1)*(j+1)<=s.length())
                res+=str[j][i];
        }
        res+=' ';
    }
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
