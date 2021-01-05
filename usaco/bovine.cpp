#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);

	int n; cin >> n;
	int swaps[n];
		
	for (int i=0;i<n;i++){
		int s; cin >> s;
		swaps[i] = s-1;
	}
	
	vector<string> ordering(n);	
	for (int i=0;i<n;i++)
		cin >> ordering[i];

	for (int i=0;i<3;i++){
		vector<string> new_ord(n);
		for (int j=0;j<n;j++)
			new_ord[j] = ordering[swaps[j]];
	
		ordering = new_ord;
	}

	for (int i=0;i<n;i++)
		cout << ordering[i] << '\n';
}
