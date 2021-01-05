#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	
	pair<int,int> c[n*2]; 

	for (int i=0;i<n;i++){
		int start, end; cin >> start >> end;	
		c[i*2].first = start;
		c[i*2].second = 1;
		c[i*2+1].first = end;
		c[i*2+1].second = -1;
	}
	
	sort (c, c+(n*2));

	int cnt = 0;
	int max_cnt = 0;
	
	for (int i=0;i<n*2;i++){
		cnt += c[i].second;
		max_cnt = max(max_cnt, cnt);
	}
	
	cout << max_cnt;
}
