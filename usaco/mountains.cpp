#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
	if (a.first != b.first) return a.first < b.first;
	else return a.second > b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("mountains.in","r",stdin);
	freopen("mountains.out","w",stdout);
	
	int n; cin >> n;

	if (n==1) cout << 1;
		
	pair<int,int> peaks[n];
	int x, y;
	for (int i=0;i<n;i++){
		cin >> x >> y;
		peaks[i].first = x - y;
		peaks[i].second = x + y;	
	}

	sort(peaks, peaks+n, cmp);

	int i = 0;
	int count = 0;	
	while (i<n){
		int j = i+1;
		count++;
		while (peaks[j].second <= peaks[i].second)
			j++;
		i=j;
	}

	cout << count;
}
