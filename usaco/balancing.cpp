#include<bits/stdc++.h>
using namespace std;

int n,b;
pair<int,int> points[100];

int max_point_q(int a, int b){
	int q[4] {0,0,0,0};
	
	for (int i=0;i<n;i++){
		if (points[i].first < a && points[i].second > b)
			q[0]++;
		else if (points[i].first > a && points[i].second > b)
			q[1]++;
		else if (points[i].first < a && points[i].second < b)
			q[2]++;
		else if (points[i].first > a && points[i].second < b)
			q[3]++;
	}
	
	int max_n = 0;
	for (auto x: q){
		max_n = max(x, max_n);
	}
	
	return max_n;
}

int main(){
	freopen("balancing.in", "r", stdin);	
	freopen("balancing.out", "w", stdout);

	cin >> n >>  b;
	
	for (int i=0;i<n;i++)
		cin >> points[i].first >> points[i].second;

	int min_n = INT_MAX;
	int max_points;	
	int i,j;
	for (i=0;i<n;i++){
		int a = points[i].first +1;
		for (j=i;j<n;j++){
			int b = points[j].second +1;
			// find max points in a quadrant made by a and b
			max_points = max_point_q(a,b);
			min_n = min(max_points, min_n); 
		}
	}
	
	cout << min_n;
}
