#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n,q; cin >> n >> q;
	string s; cin >> s;
	
	int l,r;	
	while(q--){
		bool found = false;
		cin >> l >> r;
		
		for (int i=0;i<l-1;i++){
			if (s[i] == s[l-1]){
				found = true;	
				cout <<  "YES\n";
				break;
			}
		}

		if (found) continue;
		
		for (int i=r;i<n;i++){
			if (s[i] == s[r-1]){
				found = true;	
				break;
			}
		}
	
		cout << (found ? "YES" : "NO") << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t=1; cin>>t;
	while(t--) solve();
}
