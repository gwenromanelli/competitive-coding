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

double dist(int x1, int y1, int x2, int y2){
    return(sqrt(pow(x2-x1,2) + pow(y2-y1,2)));
}
 
void solve(){
    int a,b,r,n;
    cin >> a >> b >> r >> n;
    For(n){
        int x,y;
        string str;
        cin >> x >> y;
        dist(a,b,x,y) <= r ? str = "no" : str = "yes";
        cout << str << endl;
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
