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
    int sol = 0;
    vector<vi> arr;
    For(n){
        vi temp(2,0);
        cin >> temp[1] >> temp[0];
        arr.pb(temp);
    }
    sort(all(arr));
    For(arr.size()){
        reverse(all(arr[i]));
    }
    For(2){
        int s = 0;
        int f = INT_MIN;
        For(sz(arr)){
            if (arr[i][0] > f ){
                s = arr[i][0];
                f = arr[i][1];
                arr.erase(arr.begin()+i);
                sol++;
//                cout << "Taking " << s << " " << f << endl;
            }
        }
    }
    cout << sol << endl;
    
    /*cout << endl;
    For(arr.size()){
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }*/
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
