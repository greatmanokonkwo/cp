#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin >> n >> m;

	pair<int,int> road_s[n];
	for (int i=0;i<n;i++)
		cin >> road_s[i].first >> road_s[i].second;	
		
	int bessie = 0;
	
	int max_spd = 0;	
	for (int i=0;i<m;i++){
		int len, spd; cin >> len >> spd;
	
		int start = 0, end=0;	
		for (int j=0;j<n;j++){
			end += road_s[j].first;
	
			if ((bessie <= start && bessie+len > start) || (bessie < end && bessie+len >= end)){
				max_spd = max(max_spd, spd - road_s[j].second);	
			}	
	
			start += road_s[j].first;
		}	
		bessie+=len;
	}
	
	cout << max_spd;
}
