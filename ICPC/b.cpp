#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s,'\n');
    vector<int> v(26,0);
    vector<char> chars;
    for(size_t i = 0; i < s.length(); ++i){
        char c = toupper(s[i]);
        int t = (int)(toupper(s[i]) - 'A');
        if (t >= 0 && t <= 25){
            chars.push_back(c);
            v[t]++;
        }
    }
    vector<int> pain = {1,2,3,5,8,99};
    long long sol = 0;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int a,b,t;
    a = b = t = 1;
    int j = 0;
    for(int i = 0; i < v.size(); ++i){
        if (t == 0){
            a+=2;
            j++;
            b = pain[j];
            t = b;
        }
        sol+=v[i]*a;
        t--;
    }
    sol+=3*(chars.size()-1);
    cout << sol;


    return 0;
}
