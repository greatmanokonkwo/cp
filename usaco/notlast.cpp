#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);

	int n; cin >> n;
	map<string, int> log;
		
	string name; int m;	
	while(n--){
		cin >> name >> m;
		log[name]+=m;
	}
	
	vector<pair<int,string>> cows;
	for (auto x: log)
		cows.push_back({x.second, x.first});

	sort(cows.begin(), cows.end());
	
	int index = 0;

	if (cows.size() == 7){
		while (cows[index].first == cows[0].first) index++;
	}

	if (index < 7 && (index+1 == 7 || cows[index+1].first != cows[index].first)){
		cout << cows[index].second;
		return 0;
	}
	cout << "Tie";
}
