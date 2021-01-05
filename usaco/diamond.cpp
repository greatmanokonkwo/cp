#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
		
	int n,k; cin >> n >> k;
	int a[n];
		
	for (int i=0;i<n;i++)
		cin >> a[i];

	sort(a, a+n);
	int i,j;
	int max_d = 0;
	int d;
	for (i=0;i<n;i++){
		d = 0;
		for (j=i;j<n;j++)
			if (abs(a[i] - a[j]) <= k) d++;
		max_d = max(d, max_d);
	}
	
	cout << max_d;
}
