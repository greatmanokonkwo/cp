#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	
	string s; cin >> s;
	
	vector<int> a[26];	
	for (int i=0;i<52;i++)
		a[s[i] - 65].push_back(i);

	int i,j;
	int pairs = 0;
	for (i=0;i<26;i++){
		vector<int> ends = a[i];
		int count[26] {0};
		for (j=ends[0]+1; j<ends[1];j++)
			count[s[j] - 65]++;

		for (j=0;j<26;j++)
			if (count[j] == 1)
				pairs++;
			
	}

	cout << pairs/2;
}
