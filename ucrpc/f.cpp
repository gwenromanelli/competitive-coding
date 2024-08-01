#include <bits/stdc++.h>
using namespace std;
 
using vi = vector<int>;
using vd = vector<double>;
using vs = vector<string>;
using vc = vector<char>;
using vll = vector<long long>;
 
#define For(a) for(int i = 0; i < a; ++i)
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define ROF(i,a,b) for(int i = a, i >= b; --i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)x.size()
#define ll long long
#define pb push_back
 
void solve(){
    int n,t;
    double d1;
    cin >> n >> t >> d1;
    int Max = 0;
    int x,y;
    int d = int(d1);
    unordered_map<int,int> map;
    if (t == 90){
        For(n){
            cin >> x >> y;
            for (int j = x-d; j <= x+d; ++j){
                //cout << "cum" << endl;
                //cout << x-d1 << " " << x + d1 << endl;
                map[j]++;
            }
        }
        for (auto k : map){
            Max = max(Max,k.second);
        }
        cout << Max << endl;
        return;
    }
    else {
        For(n){
            cin >> x >> y;
            for (int j = y-d; j <= y+d; ++j){
                //cout << "cum" << endl;
                //cout << x-d1 << " " << x + d1 << endl;
                map[j]++;
            }
        }
        for (auto k : map){
            Max = max(Max,k.second);
        }
        cout << Max << endl;
        return;
    }
}
 
const int mod = (1e9 + 7);
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    For(t){
        //cout << "Case #" << i + 1 << ": ";
        solve();
    }
    return 0;
}

//Check for initialized variables, overflow, and edge cases
//chillytemplate.cpp!!1!
