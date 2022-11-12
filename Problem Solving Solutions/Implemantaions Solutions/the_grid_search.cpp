#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'gridSearch' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING_ARRAY G
 *  2. STRING_ARRAY P
 */



string gridSearch(vector<string> G, vector<string> P) {
    int countI,countJ,maxJ=100000,ci=0,cj=0;
    for(int i=0;i<G.size();i++)
    { countI=0;
     countJ=0;
     maxJ=100000;
     ci=0;
      int a=i;
        for(int j=0;j<G[0].size();j++)
        {
            if(j>maxJ)
                {
                    i=i-ci;
                    ci=0;
                     j=j-cj;
                     cj=0;
                    countI=0;
                     countJ=0;
                     maxJ=100000;
                     
                }
            if(G[i][j]==P[countI][countJ])
            {
               
               if(countJ==P[0].size()-1 && countI==P.size()-1 )
                    {
                        //cout << "yes";
                        return "YES";
                    }
               if(countJ==P[0].size()-1)
               {
                   maxJ=j;
                   if(i<G.size()-1)
                   {
                       i++;
                       ci++;
                   }
                   else
                        break;
                   j=j-countJ-1;
                   countI++;
                   countJ=0;
                   cj=0;
                   
               }
               else {
               
                    countJ++;
                    cj++;
               }
            }
            else {
                countJ=0;
            }
        }
        i=a;
    }
    //cout << "no";
    return "NO";
}
int main()
{
    string s;
    vector <string> str;
    vector <string> str1;
    int n,k,l,a,b;
    cin >> n;
    while(n--)
    {
        cin >>k >>a;
        for(int i=0;i<k;i++)
    {
        cin >> s;
        str.push_back(s);
    }
    cin >> l >> b;
    for(int i=0;i<l;i++)
    {
        cin >> s;
        str1.push_back(s);
    }
    cout << gridSearch(str,str1) << endl;
        str.clear();
        str1.clear();
    }
    return 0;
}
