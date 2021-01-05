#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define F(i,a,b) for(i=a;i>=b;i--)

using namespace std;

priority_queue<int, vector<int>, greater<int>> br1, br2;
int m1, m2, b; int sum_t;

void solve(){
	sum_t = 0; b = 0;
	int n; cin >> n;
	int i,j; int spd;
	f(i,0,n){
		cin >> spd; br1.push(spd);
	}
	while(!br1.empty()){
		// fastest 2 players move to br2
		m1 = br1.top(); br1.pop();
		m2 = br1.top(); br1.pop();
		sum_t += m2;
		cout << m1 << ' ' << m2 << '\n';
		br2.push(m1); br2.push(m2);

	 	// fastest player moves back to br1
		if (b!=0) {
			br1.push(b);	
			b=0;
		}
		if (!br1.empty()){
			b=br2.top(); br2.pop(); sum_t += b;
			cout << b << '\n';
		}
	}
	cout << sum_t << '\n';
	cout << '\n';
}

int main(){
	freopen("bridge.txt","r",stdin);
	
	int t; cin >> t;
	int i;
	f(i,0,t) solve();
}
