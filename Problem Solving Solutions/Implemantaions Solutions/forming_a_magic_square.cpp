#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int formingMagicSquare(vector<vector<int>> s) {
        int sum=0,min=99,k=0;
        vector <vector <int > > magics;
        // Probability #1
        magics.push_back({8,3,4});
        magics.push_back({1,5,9});
        magics.push_back({6,7,2});
        // Probability #2
        magics.push_back({4,3,8});
        magics.push_back({9,5,1});
        magics.push_back({2,7,6});
        // Probability #3
        magics.push_back({2,7,6});
        magics.push_back({9,5,1});
        magics.push_back({4,3,8});
        // Probability #4
        magics.push_back({6,7,2});
        magics.push_back({1,5,9});
        magics.push_back({8,3,4});
        // #5
        magics.push_back({6,1,8});
        magics.push_back({7,5,3});
        magics.push_back({2,9,4});
        // #6
        magics.push_back({2,9,4});
        magics.push_back({7,5,3});
        magics.push_back({6,1,8});
        // #7
        magics.push_back({4,9,2});
        magics.push_back({3,5,7});
        magics.push_back({8,1,6});
        // #8
        magics.push_back({8,1,6});
        magics.push_back({3,5,7});
        magics.push_back({4,9,2});
        
        
        while(k<24)
        {   sum=0;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    sum+=abs(s[i][j]-magics[k][j]);
                    
                }
                k++;
            }
            if(sum<min)
                min=sum;
            
        }
        return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

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
