#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    int counter=-1;
    int temp=1;
     int counter1=1;
    if(n==p)
        return 0;
    if(n%2==0)
    {
        for(int i=0;i<=n;i+=1)
    {
        counter++;
        if(i==p)
           {
               break;
           }
        i++;
        if(i==p)
            break;
        
    }
   
    
    for(int i=n-1;i>=0;i-=1)
    {
        
        if(i==p)
           {
               break;
           }
        i--;
        if(i==p)
            break;
        counter1++;
    }
    if(counter<counter1)
        return counter;
    return counter1;
    
}

    else {
    int counter12=-1;
     int counter11=-1;
    for(int i=0;i<=n;i+=1)
    {
        counter12++;
        if(i==p)
           {
               break;
           }
        i++;
        if(i==p)
            break;
        
    }
   
    
    for(int i=n;i>=0;i-=1)
    {
        counter11++;
        if(i==p)
           {
               break;
           }
        i--;
        if(i==p)
            break;
        
    }
    if(counter12<counter11)
        return counter12;
    return counter11;
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

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
