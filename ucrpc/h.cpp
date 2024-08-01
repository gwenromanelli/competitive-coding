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
    int n;
    cin >> n;
    vi arr(n,0);
    vi dp(n,0);
    For(n){
        cin >> arr[i];
        dp[i] = arr[i];
    }
    for(int i = 1; i < n; ++i){
        for (int j = 0; j < i; ++j){
            if (arr[i] > arr[j] && dp[i] < dp[j] + arr[i]){
                dp[i] = dp[j] + arr[i];
            }
        }
    }
    int Max = 0;
    For(sz(dp)){
        Max = max(Max,dp[i]);
    }
    cout << Max << endl;
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
