#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("planting.in", "r", stdin);
	freopen("planting.out","w", stdout);
		
	int n; cin >> n;

	vector<int> adj[n+1];

	int a,b;
	while(cin >> a >> b){
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	
	int max_n = 0;
	for (int i=1;i<=n;i++)
		max_n = max((int) adj[i].size(), max_n);

	cout << max_n + 1;
}
