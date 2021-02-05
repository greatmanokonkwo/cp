#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin >> n;
	
	pair<int,int> tasks[n];

	for (int i=0;i<n;i++)
		cin >> tasks[i].first >> tasks[i].second;

	sort (tasks, tasks+n);

	long long ans = 0;
	long long t = 0;
	
	for (int i=0;i<n;i++){
		t+=tasks[i].first;
		ans += (tasks[i].second - t);
	}

	cout << ans;
}
