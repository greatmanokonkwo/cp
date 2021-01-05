#include<bits/stdc++.h>
using namespace std;

bool right (pair<int,int> a, pair<int,int> b, pair<int,int> c){
	if (a.first == b.first || a.first == c.first || b.first == c.first)
		if (a.second == b.second || a.second == c.second || b.second == c.second)
			return true;
	return false;
}

int area(pair<int,int> a, pair<int,int> b, pair<int,int> c){
	int x;
	if (a.second == b.second)
		x = abs(a.first - b.first);
	else if (a.second == c.second)
		x = abs(a.first - c.first);
	else if (b.second == c.second)
		x = abs(b.first - c.first);
	
	int y;
	if (a.first == b.first)
		y = abs(a.second - b.second);
	else if (a.first == c.first)
		y = abs(a.second - c.second);
	else if (b.first == c.first)
		y = abs(b.second - c.second);
	
	return x*y;
}

int main(){
	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);
	
	int n; cin >> n;
	
	pair<int,int> a[n];

	for (int i=0;i<n;i++){
		pair<int,int> p; cin >> p.first >> p.second;
		a[i] = p;
	}

	int i,j,k;
	int max_a = 0;	
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			for (k=j+1;k<n;k++){
				// check if the three points make a right angle triangle
				if (right(a[i], a[j], a[k])){
					// if yes, then calculate area and max
					max_a = max(area(a[i], a[j], a[k]), max_a);
				}
			}
		}
	}
	
	cout << max_a;
}
