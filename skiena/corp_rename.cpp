#include<bits/stdc++.h>

using namespace std;

string text_crr(string &s){
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	

	int n; cin >> n; // number of renamings
	map<string,string> renamings; // map of name changes
	int i; // counter
	string str1,str2; // original name and new name
	int num_q=0; // indicates how many quote characters have been encountered;
	char c; 
	for (i=0;i<n;i++){
		while(cin >> c){
			if (c=='"') {
				num_q++;
				if (num_q==4) break;
				continue;
			}
			if (num_q==2) continue;
			if (num_q > 1) str2.push_back(c);
			else str1.push_back(c);
		}
		renamings[str1] = str2;
		num_q=0;str1=str2="";
	}
	cin >> n; string text; string line;
	for (i=0;i<n;i++){
		getline(cin,line);
		cout << text_crr(line);
	}
}
