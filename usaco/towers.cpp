#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin >> n;
	
	int blocks[n];
	for (int i=0;i<n;i++)
		cin >> blocks[i];
	

	multiset<int> towers;

	for (int i=0;i<n;i++){
		auto it = towers.upper_bound(blocks[i]);
		if (it != towers.end()){
			towers.erase(it);
			towers.insert(blocks[i]);
		} else{
			towers.insert(blocks[i]);
		}		
	}


	cout << towers.size();
}
