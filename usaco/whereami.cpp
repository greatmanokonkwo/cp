#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);

	int n; cin >> n;
	string seq; cin >> seq;

	int k = 1;
	while (true){
		map<string, int> m;
		for (int i=0;i<=n-k;i++){
			string s;
			for (int j=i;j<i+k;j++){
				s.push_back(seq[j]);
			}
			m[s]++;
		}

		bool found = true;
		for (auto x: m){
			if (x.second > 1){
				found = false;
				break;	
			} 
		}
			
		if (found){
			cout << k;
			break;
		}
		k++;
	}
}
				
