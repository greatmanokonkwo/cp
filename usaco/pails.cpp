#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
		
	int x,y,m; cin >> x >> y >> m;
	int a, b;
	a = m/x;
	b = m/y;

	int max_m = 0;
	for (int i=0;i<=a;i++)
		for (int j=0;j<=b;j++)
			if (i*x + j*y <= m)
				max_m = max(i*x + j*y, max_m);

	cout << max_m;
}
