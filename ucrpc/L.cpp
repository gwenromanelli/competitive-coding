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
    ll n,m;
    cin >> n;
    unordered_map<ll,ll> map;
    For(n){
        ll a,b;
        cin >> a >> b;
        map[a] = b;
    }
    cin >> m;
    ll destr[m] = {};
    For(m){
        ll a,b,y;
        cin >> a >> b >> y;
        for (ll j = (y-b > 0 ? y-b : 0); j <= y+b; j++){
            if (map[j] > 0 && a >= map[j]){
                map[j] = 0;
                destr[i]++;
            }
        }
    }
    For(m){
        cout << destr[i] << endl;
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
