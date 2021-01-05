#include<bits/stdc++.h>
using namespace std;

using ll = long long;
	
int main(){
	map<ll, ll> a;
	
	int q; cin >> q;
	while(q--){
		int q_t; cin >> q_t;
		ll k,v;
		if (q_t){
			cin >> k;
			cout << a[k] << '\n';
		} else {
			cin >> k >> v;
			a[k] = v;
		}
	}
}
