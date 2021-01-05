#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("blocks.in","r",stdin);
	freopen("blocks.out", "w", stdout);
	int n; cin >> n;
	
	int freq1[26] {0};
	
	for (int i=0;i<n;i++){
		bool freq2[26] {false};
	
		string s1, s2; cin >> s1 >> s2;
		for (auto c: s1)
			freq2[c - 'a'] = true;
		for (auto c: s2)
			freq2[c - 'a'] = true;
		
		for (int i=0;i<26;i++)
			if (freq2[i]) freq1[i]++;		
	}

	for (int i=0;i<26;i++)
		cout << freq1[i] << '\n';
}
