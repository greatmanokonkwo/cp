#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("cowqueue.in","r",stdin);
	freopen("cowqueue.out","w",stdout);
	int n; cin >> n;
		
	vector<pair<int,int>> samples;
	for (int i=0;i<n;i++) {
		pair<int,int> p;
		cin >> p.first >> p.second;
		samples.push_back(p);
	}
		
	sort(samples.begin(),samples.end());
	
	int min_time = samples[0].first + samples[0].second;	

	for (int i=1;i<n;i++){
		int start_t = max(min_time, samples[i].first);
		min_time = start_t + samples[i].second;
	}
	cout << min_time;
}
