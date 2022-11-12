#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    vector <int> Num;
    Num.push_back(1);
    int g=2;
    while(g<=n)
    {
        
        for(int i=0;i<Num.size();i++)
        {
            Num[i]*=g;
        }
        for(int i=0;i<Num.size();i++)
        {
            if(Num[i]>=10)
            {   int j=1;
                int k=(pow(10,j));
                if(i+j>=Num.size())
                {
                    Num.insert(Num.begin()+i+j,Num[i]/k);
                }
                else
                {
                    Num[i+j]+=Num[i]/k;
                }
                Num[i]=Num[i]%k;     
            }
        }
        g++;
    }
    for(int h=Num.size()-1;h>=0;h--)
    {
        cout << Num[h];
    }

}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
