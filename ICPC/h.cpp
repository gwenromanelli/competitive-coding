#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    int sol = 1;
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    for(int i = 1; i < n; ++i){
        if (v[i] < v[i-1]){
            sol++;
        }
    }
    cout << sol;
    return 0;
}
