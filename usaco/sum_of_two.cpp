#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n,x; cin >> n >> x;
	
	int arr[n];
	map<int,int> m;
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	
	for (int i=0;i<n;i++){
		if (m.count(x - arr[i])){
			cout << i + 1 << " " << m[x - arr[i]];
			return 0;
		}
		m[arr[i]] = i + 1;	
	}
	cout << "IMPOSSIBLE";
}
