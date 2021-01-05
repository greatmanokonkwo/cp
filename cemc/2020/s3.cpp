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
	ios_base::sync_with_stdio(0); cin.tie();
	
	string needle, haystack; cin >> needle >> haystack;
	map<char,int> f_needle,f_haystack;	
	int n = needle.size();	
	// set freq map for needle
	int i,j,count=0;
	for (i=0;i<n;i++)
		f_needle[needle[i]]++;
		
	hash<string> hasher; map<size_t,bool> used;
	string sub;
	for (i=0;i<haystack.size()-n+1;i++){
		sub = haystack.substr(i,n);

		if (i==0){
			for (j=0;j<n;j++)
				f_haystack[sub[j]]++;	
		} else {
			f_haystack[haystack[i-1]]--; f_haystack[sub[n-1]]++;	
		}
			
		if (used[hasher(sub)]) continue;
		
		if (comp(f_needle, f_haystack)) {
			used[hasher(sub)] = true;	
			count++;
		}	

	}
	cout << count;
}

