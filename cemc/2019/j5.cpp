#include<bits/stdc++.h>
using namespace std;

pair<string,string> subs[3];
vector<string> swaps_made;
bool seq_found = false;
int moves; string start,target;

void swap_str(string s1, string s2, int pos){
	string front = start.substr(0,pos);
	string back = start.substr(pos+s1.size(),start.size());

	start = front+s2+back;
}

void solve(int k){
	if (k==moves){
		if (start.compare(target) == 0){
			seq_found = true;
			for (string swap: swaps_made){
				cout << swap << '\n';
			}
		}
		return;
	}

	for (int i=0;i<3;i++){		
		if (!seq_found){
			int pos = start.find(subs[i].first);  	
			if (pos != string::npos){
				cout << start << '\n';
				swap_str(subs[i].first,subs[i].second,pos);	
				
				stringstream swap_m;
				swap_m << i+1 << ' ' << pos+1 << ' ' << start;
				
				swaps_made.push_back(swap_m.str());
				
				solve(k+1);
				
				swap_str(subs[i].second,subs[i].first,pos);	
				cout << start << '\n';	
				swaps_made.pop_back();
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	string s1,s2;	
	for (int i=0;i<3;i++){
		cin >> s1 >> s2;
		subs[i] = make_pair(s1,s2);	
	}
	
	cin >> moves >> start >> target;
	solve(0);	
}
