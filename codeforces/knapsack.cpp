#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n; ll W; cin >> n >> W;
	int weights[n];

	bool found = false;

	for (int i=0;i<n;i++) {
		cin >> sack[i];
		if (sack[i] == W){
			cout << '1' << i+1 << '\n';
			found = true;
		}
	}
	
	if (!found){
		sort(sack,sack+n);

	}	
}

int main(){
	int t; cin >> t;
	while(t--) solve();
}
