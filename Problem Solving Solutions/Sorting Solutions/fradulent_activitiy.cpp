#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'activityNotifications' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY expenditure
 *  2. INTEGER d
 */
void ekle(vector <int> &vec,int item){
    vec.insert
        ( 
            std::upper_bound( vec.begin(), vec.end(), item ),
            item 
        );
}
int activityNotifications(vector<int> expenditure, int d) {
    double med=0;
    vector <int> a;
    int temp;
    int ans=0;
    for(int i = 0; i < d; i++){
        a.push_back(expenditure[i]);
    }
    temp=a[0];
    sort(a.begin(),a.end());
    
    if(d%2==1){
        med = a[d/2];
    }else{
        med += a[d/2] + a[d/2 -1];
        med/=2;  
    }
    for(unsigned int i=d; i < expenditure.size(); i++){
        if(expenditure[i] >= 2*med)
            ans++;
        
        auto it=find(a.begin(),a.end(),temp);
        a.erase(it);
        temp=expenditure[i-d+1];
        ekle(a,expenditure[i]);
        med=0;
        if(d%2==1){
            med = a[d/2];
        }else{
            med += a[d/2] + a[d/2 -1];
            med/=2;  
        }
    }
    return ans;
}

int main()
{
    int n,d;
    cin >> n >> d;
    vector <int> a;
    for(int i=0 ; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    cout << activityNotifications(a,d);
    return 0;
    
}
