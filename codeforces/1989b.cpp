#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	string b;
	cin >> a;
	cin >> b;
	int a_ptr = 0;
	int b_ptr = 0;
	while (a_ptr < a.length() && b_ptr < b.length()){
		if (a[a_ptr] == b[b_ptr]){
			b.erase(b.begin() + i);
			break;
		}
		a_ptr++;
	}
	//cout << "A: " << a << endl;
	//cout << "B: " <<  b << endl;
	cout << (a.length() + b.length()) << endl;
	return;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	for(int i = 0; i < t; ++i){
		//cout << "Case #" << i + 1 << ": ";
		solve();
	}
	return 0;
}
