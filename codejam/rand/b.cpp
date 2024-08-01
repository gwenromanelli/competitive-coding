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
	int n;
	cin >> n;
	vector<int> v(n,0);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	sort(all(v));
	int m = 0;
	for(int i = 0; i < n; ++i){
		if (v[i] > m){
			m++;
		}
	}
	cout << m << endl;
}
 
const int mod = (1e9 + 7);
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	for(int i = 0; i < t; ++i){
		cout << "Case #" << i + 1 << ": ";
		solve();
	}
	return 0;
}

//Check for initialized variables, overflow, and edge cases

