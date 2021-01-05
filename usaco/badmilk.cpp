#include<bits/stdc++.h>
using namespace std;

int n, m, d, s;
vector<pair<int,int>> logs[50];
bool sick[51] {false};
bool bad[51] {false};

void bad_milk(){
	int over = 0;

	for (int i=0;i<s;i++){
		int p,t; cin >> p >> t;
		over = max(over, t);
		sick[p] = true;
		for (auto x: logs[p])
			if (x.first < t)
				bad[x.second] = true;
	}

	for (int j=1;j<=n;j++){
		vector<pair<int,int>> log = logs[j];
			for (auto x: log)
				if (x.first < over && !sick[j]) bad[i] = false;
		}
}	
	
int main(){
	freopen("badmilk.in","r", stdin);
	freopen("badmilk.out", "w", stdout);

 	cin >> n >> m >> d >> s;
	
	for (int i=0;i<d;i++){
		int p,m,t; cin >> p >> m >> t;
		logs[p].push_back({t, m});
	}

	for (auto x: logs)
		sort(x.begin(), x.end());

	// Figure out the bad milk
	bad_milk();

	int cnt = 0;	
	for (int i=1;i<=n;i++){
		vector<pair<int,int>> log = logs[i];
		for (auto x: log){
			if (bad[x.second]){
				cnt++;
				break;
			}
		}
	}	
	
	cout << cnt;
}
