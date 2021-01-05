#include<bits/stdc++.h>
using namespace std;

bool is_prime(int a){
	for (int i=2;i<=(a/2);i++){
		if (a%i == 0) return false;
	}
	return true;
}

void solve(){
	int n; cin>>n;
	n = n*2;
	
	for (int i=3;i<n;i+=2){
		if (is_prime(i) && is_prime(n-i)){
			cout << i << ' ' << n-i;
			break;
		}
	}
	cout << '\n';
}			

int main(){
	int t; cin >> t;
	while(t--) solve();
}
