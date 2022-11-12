#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> ab;
    stringstream ss;
    ss << str;
    int temp;
    char ch;
     while (ss >> temp) 
    {
        ab.push_back(temp);
        ss >> ch;
    }
   
    
	return ab;
}

int main() {
    string str;
    cin >> str;
    std::vector<int> integers;
    integers = parseInts(str);
    
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
