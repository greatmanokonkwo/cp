#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t; cin>>t;
	int n; char c;
	
	int i,j;
	
	for (i=0;i<t;i++){
		cin >> n >> c;
		for (j=0;j<n;j++){
			cout << c;
		}
		cout << '\n';
	} 	
}
