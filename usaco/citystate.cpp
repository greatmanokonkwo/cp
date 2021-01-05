#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("citystate.in", "r", stdin);
	freopen("citystate.out", "w", stdout);
	
	int n; cin >> n;
	
	map<string, int> cnt;

	string city, state;
	int ans = 0;
	for (int i=0;i<n;i++){
		cin >> city >> state;
		city = city.substr(0,2);
		if (city != state) ans += cnt[state+city];
		cnt[city+state]++;
	}
	cout << ans;
}	
