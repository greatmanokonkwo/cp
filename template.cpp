#include<bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

using pqi = priority_queue<int>;
using pqgi = priority_queue<int,vector<int>,greater<int>>;

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)

// graphs
vi<pi> DIRS = {{-1,0},{0,-1},{0,1},{1,0},
						  {-1,-1},{-1,1},{1,-1},{1,1}};

void setIO(string name = ""){
	ios_base::sync_with_stdio(0); cin.tie(0);

	if (sz(name)){
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdin);
	}
}

void solve(){
	
}

int main(){
	setIO();

	int t=1; //cin >> t;
	while(t--) solve();	
}
