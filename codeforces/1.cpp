#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n; cin >> n;
	
	int count = 0;
		
	while(n!=1){
		if (n==2) {
			count++;
			break;
		}

		if (n%2==0)
			n/=(n/2);
		else 
			n--;
		count++;
	}
	cout << count << '\n';
}

int main(){
	ios_base::sync_with_stdio(); cin.tie(0);
	
	int t=1; cin>>t;
	while(t--) solve();
}
