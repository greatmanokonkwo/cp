#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool dynamic(int d, int k, int i, int x, int y){
	if ((x+k)*(x+k) + y*y > d*d && x*x + (y+k)*(y+k) > d*d){
		return true;
	}

	if (dynamic(d,k,i+1,x+k,y) && dynamic(d,k,i+1,x,y+k))
		return true;
	else 
		return false;
}
	
void solve(){
	int d,k; cin >> d >> k; 
	cout << (dynamic(d,k,0,0,0) ? "Ashish" : "Utkarsh") << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t=1; cin>>t;
	while(t--) solve();
}
