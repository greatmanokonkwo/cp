#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	
	pair<int,int> a[n];
		
	for (int i=0;i<n;i++)
		cin >> a[i].first;
	
	for (int i=0;i<n;i++)
		cin >> a[i].second;

	int max_dist = 0;
	
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			int dx = a[i].first - a[j].first
			int dy = a[i].second - a[j].second;
			max_dist = max(max_dist, dx*dx + dy*dy);
		}
	}
	
	cout << max_dist;
}
