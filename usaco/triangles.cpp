#include<bits/stdc++.h>
using namespace std;

int get_area(const set<pair<int,int>>& s){
	pair<int,int> points[3];
	int i = 0;
	for (auto x: s){
		points[i] = x;
		i++;
	}
	
	int dist_y;
	if (points[0].first == points[1].first)
		dist_y = max(points[0].second, points[1].second) - min(points[0].second, points[1].second);
	else if (points[0].first == points[2].first)
		dist_y = max(points[0].second, points[2].second) - min(points[0].second, points[2].second);
	else if (points[1].first == points[2].first)
		dist_y = max(points[1].second, points[2].second) - min(points[1].second, points[2].second);
	
	int dist_x;
	if (points[0].second == points[1].second)
		dist_x = max(points[0].first, points[1].first) - min(points[0].first, points[1].first);
	else if (points[0].second == points[2].second)
		dist_x = max(points[0].first, points[2].first) - min(points[0].first, points[2].first);
	else if (points[1].second == points[2].second)
		dist_x = max(points[1].first, points[2].first) - min(points[1].first, points[2].first);

	return dist_x*dist_y;
}

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("triangles.in","r",stdin);
	freopen("triangles.out","w",stdout);
	
	int n;
	cin >> n;	

	pair<int,int> points[n];	
	for (int i=0;i<n;i++)
		cin >> points[i].first >> points[i].second;

	sort(points, points+n);

	vector<pair<pair<int,int>, pair<int,int>>> same_x;
	
	for (int i=0;i<n-1;i++)
		if (points[i].first == points[i+1].first)
			same_x.push_back({points[i], points[i+1]});

	sort(points, points+n, cmp);
	
	vector<pair<pair<int,int>, pair<int,int>>> same_y;
	
	for (int i=0;i<n-1;i++)
		if (points[i].second == points[i+1].second)
			same_y.push_back({points[i], points[i+1]});

	
	vector<set<pair<int,int>>> triangles;
	set<pair<int,int>> t;
	for (auto a: same_x){
		for (auto b: same_y){
			t.insert(a.first); t.insert(a.second);
			t.insert(b.first); t.insert(b.second);
			triangles.push_back(t);
			t.clear();
		}
	}

	int ans = 0;
	
	for (auto t: triangles){
		if (t.size() == 3){
			ans += get_area(t);
		}
	}

	cout << ans;
}
			
