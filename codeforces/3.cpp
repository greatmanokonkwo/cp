#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n,k; cin >> n >> k;
	string a,b; cin >> a >> b;
		
	bool yes = true;

	int have[27] {}, need[27] {};

	for (auto c: a)
		have[c - 'a']++;
	for (auto c: b)
		need[c - 'a']++;
	
	for (int i=0; i < 26; i++){
		if (have[i] < need[i] || (have[i] -= need[i]) % k)
			yes = false;
		have[i+1] += have[i];
	}

	cout << ( yes ? "Yes" : "No") << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t=1; cin>>t;
	while(t--) solve();
}
