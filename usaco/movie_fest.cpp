#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n,k;
	cin >> n >> k;
	
	pair<int,int> movies[n];
	bool used[n];
	
	for (int i=0;i<n;i++)
		cin >> movies[i].first >> movies[i].second;
	
	sort(movies, movies+n, cmp);

	int ans = 0;
	for (int i=0;i<k;i++){
		int end = 0;
		for (int j=0;j<n;j++){
			if (movies[j].first >= end && !used[j]){
				ans++;
				end = movies[j].second;
				used[j] = true;
			}
		}
	}
	
	cout << ans;
}	
