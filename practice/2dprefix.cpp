#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin >>  n >> m;
	
	int prefix[n+1][m+1];
	for (int i=0;i<=n;i++)
		for (int j=0;j<=m;j++)
			prefix[i][j] = 0;

	int num;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> num;
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + num;
			cerr << prefix[i][j] << ' ';
		}
		cerr << '\n';
	}		


}
