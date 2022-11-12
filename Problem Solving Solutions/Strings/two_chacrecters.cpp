#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool alternating(string &s) {
    if (s.size() < 2) return 0;
    char a = s[0];
    char b = s[1];
    if (a == b) return 0;
    
    for (int i=2; i<s.size(); i++) {
        if (i%2== 1) {
            if (s[i] != b) return 0;
        } else if (s[i] != a) return 0;
    }
    
    return 1;
}

int main() {
    string s;
    cin >> s;
    cin >> s;
    
    int ans = 0;
    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = 'a'; b <= 'z'; b++) {
            if (a == b) continue;
            string t;
            for (int i=0; i<s.size(); i++) {
                if (s[i] == a || s[i] == b) t += s[i];
            }
            
            if (alternating(t)) ans = max(ans, (int) t.size());
        }
    }
    cout << ans << endl;
    return 0;
}
