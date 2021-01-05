#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
	
	int n; cin >> n;
	pair<int,int> intervals[n];

	for (int i=0;i<n;i++)
		cin >> intervals[i].first >> intervals[i].second;

	sort (intervals, intervals+n);

	int min_t = INT_MAX;

	min_t = min(min_t, min(intervals[1].first, intervals[0].second) - intervals[0].first);
	min_t = min(min_t, intervals[n-1].second - max(intervals[n-2].second, intervals[n-1].first));

	int dist;

	for (int i=1;i<n-1;i++){
		dist = min(intervals[i+1].first, intervals[i].second) - max(intervals[i-1].second, intervals[i].first);
		min_t = min(min_t, dist);
	}

	min_t = max(min_t, 0);

    int tot = intervals[0].second - intervals[0].first;
	int end = intervals[0].second;
    for (int i = 1; i < n; i++) {
        if (intervals[i].second > end) {
			tot += intervals[i].second - max(end, intervals[i].first);
			end = intervals[i].second;
        }
    }

	cout << tot - min_t;	
}
