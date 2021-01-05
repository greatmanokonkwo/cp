#include<bits/stdc++.h>
using namespace std;

using vi = vector<int>;
#define pb push_back

bool comp(map<char,int> &map1, map<char,int> &map2){
	for (int i='a'; i<'z'+1; i++){
		if (map1[(char)i] != map2[(char)i]) return false;
	}
	return true;
}	
	
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	string needle, haystack; cin >> needle >> haystack;
	sort(needle.begin(),needle.end());	
	int n = needle.size(); int count=0;
		
	hash<string> hasher; map<size_t,bool> used;
	string sub,temp;
	for (int i=0;i<haystack.size()-n+1;i++){
		sub = haystack.substr(i,n);
		temp = sub;
		sort(sub.begin(),sub.end());
			
		if (used[hasher(temp)]) continue;
		
		if (needle.compare(sub) == 0) {
			used[hasher(temp)] = true;	
			count++;
		}	

	}
	cout << count;
}

