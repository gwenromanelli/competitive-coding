#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

using vi = vector<int>;
using vd = vector<double>;
using vld = vector<long double>;
using vs = vector<string>;
using vc = vector<char>;
using vll = vector<long long>;
using vpi = vector<pair<int,int>>;
using vpl = vector<pl>;
using vpd = vector<pd>;
 
#define vt vector
#define For(i,a,b,s) for(int i = a; (s)>0?i<(b):i>(b); i+=(s))
#define For1(e) For(i,0,e,1)
#define For2(i,e) For(i,0,e,1)
#define For3(i,b,e) For(i,b,e,1)
#define For4(i,b,e,s) For(i,b,e,s)
#define trav(a,x) for(auto& (a): (x))

#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)x.size()
#define pb push_back
#define f first
#define s second

template<class T>
bool ckmin(T& a, const T& b){return a < b ? a = b, 1: 0;}

template<class T>
bool ckmax(T& a, const T& b){return a > b ? a = b, 1: 0;}

template<class T>
T firsttrue(function<bool(T)> f, T lb, T rb){
	while (lb < rb){
		T mb = (lb + rb)/2;
		f(mb)?rb = mb:lb=mb+1;
	}
	return lb;
}

template<class T>
T lasttrue(function<bool(T)> f, T lb, T rb){
	while (lb < rb){
		T mb = (lb + rb + 1)/2;
		f(mb)? lb = mb: rb=mb+1;
	}
	return lb;
}

template<class A> void read(A& a){cin >> a;}

template<class T> void read(vector<T>& v){
	trav(a,v)
		read(a);
}

string to_string(char c){return string(1,c);}
string to_string(bool b){return b? "true":"false";}
string to_string(const char* s){return string(s);}
string to_string(string s){return s;}
string to_string(vector<bool> v){
	string res;
	For1(sz(v))
		res+=char('0'+v[i]);
	return res;
}

template<class T> string to_string(T v) {
    bool f=1;
    string res;
    trav(x, v) {
		if(!f)
			res+=' ';
		f=0;
		res+=to_string(x);
	}
    return res;
}

template<class A> void write(A x) {
	cout << to_string(x);
}

template<class H, class... T> void write(const H& h, const T&... t) { 
	write(h);
	write(t...);
}
void print() {
	write("\n");
}
template<class H, class... T> void print(const H& h, const T&... t) { 
	write(h);
	if(sizeof...(t))
		write(' ');
	print(t...);
}

template<class T> void offset(ll o, T& x) {
	x+=o;
}
template<class T> void offset(ll o, vt<T>& x) {
	trav(a, x)
		offset(o, a);
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(rng);
}

void solve(){

	

	return;
}
 
const int mod = (1e9 + 7);
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	For1(t){
		//cout << "Case #" << i + 1 << ": ";
		solve();
	}
	return 0;
}
