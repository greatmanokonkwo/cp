#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("mowing.in","r",stdin);
	freopen("mowing.out","w",stdout);
	
	int n; cin >> n;
	int min_x = INT_MAX;

	int grid[2002][2002];
	for (int i=0;i<2002;i++)
		for (int j=0;j<2002;j++)
			grid[i][j] = 0;

	int x=1000, y=1000;

	int t = 0;
	for (int i=0;i<n;i++){
		char d; int s; cin >> d >> s;
	
		for (int j=0;j<s;j++){
			if (grid[y][x]) min_x = min(t - grid[y][x], min_x);
			grid[y][x] = t;

			if (d == 'N') y++;
			else if (d == 'S') y--;
			else if (d == 'E') x++;
			else if (d == 'W') x--;

			t++;
		}
	}
	
	if (min_x == INT_MAX) cout << -1;
	else cout << min_x;
}
