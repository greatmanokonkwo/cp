#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<double,double>> records;

	pair<double,double> rec;
	for(int i=0;i<n;i++){
		cin >> rec.first >> rec.second;
		records.push_back(rec);
	}
	
	sort(records.begin(),records.end());
	double dist, time, max_rec=0;
	for (int i=1;i<n;i++){
		dist = abs(records[i].second - records[i-1].second);
		time = records[i].first - records[i-1].first;
		max_rec = max(max_rec, (dist/time));
	}

	cout << max_rec;
}
