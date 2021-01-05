#include<bits/stdc++.h>
#define F(i,a,b) for (i=a;i<b;i++)

using namespace std;

// (m,n), m = i, n = j
// start (0,0) and end (m-1,n-1) in index terms

void solve(){
	string n;
	int i;
	cin >> n;
	int max_d = 0;
	int d = 1;
	F(i,0,n.length()-1){
		if (n[i]==n[i+1]){
			d++;
		} else{
			max_d = max(d, max_d);
			d=1;
		}
	}

	cout << ((max_d>=7) ? "YES" : "NO");
}

int main(){
	int t = 1;
	int i;
	//cin >> t;
	F(i,0,t) solve();
}
