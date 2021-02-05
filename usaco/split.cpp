#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("split.in","r",stdin);
	freopen("split.out","w",stdout);

	int n; 
	cin >> n;
	
	pair<int,int> cows[n];
	int max_x = 0, min_x = INT_MAX, max_y = 0, min_y = INT_MAX;
	for (int i=0;i<n;i++){
		cin >> cows[i].first >> cows[i].second;	
		max_x = max(max_x, cows[i].first);
		min_x = min(min_x, cows[i].first);
		max_y = max(max_y, cows[i].second);
		min_y = min(min_y, cows[i].second);
	}

	cerr << min_x << ' ' << max_x << ' ' << min_y << ' ' << max_y << '\n';
	sort (cows, cows+n);

	int area = (max_x - min_x) * (max_y - min_y);

	int split_area, ans = INT_MAX;

	// Test vertical line for smallest split areas
	int max_d = 0; int max_i;
	for (int i=0;i<n-1;i++)
		max_d = max(max_d, cows[i+1].first - cows[i].first);
	
	vector<int> maxs_v;
	for (int i=0;i<n-1;i++){
		int dist = cows[i+1].first - cows[i].first;
		if (dist == max_d)
			maxs_v.push_back(i);
	}
	
	max_i = maxs_v[maxs_v.size()/2];

	max_y = 0, min_y = INT_MAX;
	for (int i=0;i<=max_i;i++){
		max_y = max(max_y, cows[i].second);
		min_y = min(min_y, cows[i].second);	
	}

	ans = (cows[max_i].first - cows[0].first) * (max_y - min_y);

	max_y = 0, min_y = INT_MAX;
	for (int i=max_i+1;i<n;i++){
		max_y = max(max_y, cows[i].second);
		min_y = min(min_y, cows[i].second);	
	}

	ans += (cows[n-1].first - cows[max_i+1].first) * (max_y - min_y);
	split_area = ans;

	sort (cows, cows+n, cmp);

	ans = 0;

	// Test horizontal line for smallest split areas
	max_d = 0;
	for (int i=0;i<n-1;i++)
		max_d = max(max_d, cows[i+1].second - cows[i].second);
	
	vector<int> maxs_h;
	for (int i=0;i<n-1;i++){
		int dist = cows[i+1].second - cows[i].second;
		if (dist == max_d)
			maxs_h.push_back(i);
	}
	
	max_i = maxs_h[maxs_h.size()/2];

	max_x = 0, min_x = INT_MAX;
	for (int i=0;i<=max_i;i++){
		max_x = max(max_x, cows[i].first);
		min_x = min(min_x, cows[i].first);	
	}

	ans = (cows[max_i].second - cows[0].second) * (max_x - min_x);

	max_x = 0, min_x = INT_MAX;
	for (int i=max_i+1;i<n;i++){
		max_x = max(max_x, cows[i].first);
		min_x = min(min_x, cows[i].first);	
	}

	ans += (cows[n-1].second - cows[max_i+1].second) * (max_x - min_x);
	split_area = min(split_area, ans);

	cerr << area << ' ' << split_area << '\n';
	cout << area - split_area;
}
	
