#include<bits/stdc++.h>
using namespace std;

int n_common(vector<string> a, vector<string> b){
	int m = 0;

	for (int i=0;i<a.size();i++)
		for (int j=0;j<b.size();j++)
			if (a[i] == b[j]) m++;

	return m;
}

int main(){
	freopen("guess.in", "r", stdin);
	freopen("guess.out", "w", stdout);
	
	int n; cin >> n;
	
	vector<string> chars[n];
	
	for (int i=0;i<n;i++){
		string s; cin >> s;
		int c; cin >> c;
		
		for (int j=0;j<c;j++){
			string ch; cin >> ch;
			chars[i].push_back(ch);
		}
	}

	int i,j;
	int max_m = 0;
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			max_m = max(max_m, n_common(chars[i], chars[j]));

	cout << max_m+1;
}

