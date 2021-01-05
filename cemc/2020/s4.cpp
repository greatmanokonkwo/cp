#include<bits/stdc++.h>
using namespace std;

using vi = vector<int>;
#define pb push_back

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	
	vector<char> seating; char s;
	int group_s[3];

	while (cin>>s){
		seating.pb(s);
		group_s[s-'A']++;
	}
		
	int min_swaps = INT_MAX;	
}

