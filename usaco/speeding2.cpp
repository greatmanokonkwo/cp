#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

	int n,m; cin >> n >> m;

	int road[100], travel[100];

	int start = 0;	
	for (int i=0;i<n;i++){
		int d, s; cin >> d >> s;
		
		for (int i=start; i<start+d;i++)
			road[i] = s; 

		start+=d;
	}
	
	start = 0;	
	for (int i=0;i<m;i++){
		int d, s; cin >> d >> s;
		
		for (int i=start; i<start+d;i++)
			travel[i] = s; 

		start+=d;
	}
	
	int max_spd = 0;
	for (int i=0;i<100;i++)
		max_spd = max(max_spd, travel[i] - road[i]);
	
	cout << max_spd;
}
