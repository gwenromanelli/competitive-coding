#include <bits/stdc++.h>
using namespace std;
 
using vi = vector<int>;
using vd = vector<double>;
using vs = vector<string>;
using vc = vector<char>;
using vll = vector<long long>;
 
#define FOR(i,a,b) = for(int i = a; i < b; ++i)
#define ROF(i,a,b) = for(int i = a, i >= b; --i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)x.size()
#define ll long long
#define pb push_back
 
void solve(){
	int a[4] = {};
	int m = 0;
	for(int i = 0; i < 4; ++i){
		a[i] = INT_MAX;
	}
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 4; ++j){
			cin >> m;
			a[j] = min(m,a[j]);
		}
	}
	ll sum = 0;
	for(int i = 0; i < 4; ++i){
		sum+=a[i];
	}
	if (sum < 1000000){
		cout << "IMPOSSIBLE" << endl;
	}
	else{
		ll diff = sum - 1000000;
		for(int i = 0; i < 4; ++i){
			if (a[i] < diff){
				diff-=a[i];
				a[i] = 0;
			}
			else {
				a[i] -= diff;
				diff = 0;
			}
		}
		for(int i = 0; i < 4; ++i){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
}
 
const int mod = (1e9 + 7);
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	for(int i = 0 ; i < t; ++i){
		cout << "Case #" << i + 1 << ": ";
		solve();
	}
	return 0;
}

//Check for initialized variables, overflow, and edge cases

