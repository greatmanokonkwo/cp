#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("censor.in","r",stdin);
	freopen("censor.out","w",stdout);
		
	string s,t; cin >> s >> t;

	string n; 	
	for (int i=0;i<s.size();i++){
		n+=s[i];
	
		if (n.size() >= t.size() && t.compare(n.substr(n.size() - t.size(), n.size())) == 0)
			n.resize(n.size() - t.size());
	}
	
	cout << n;	
}
