#include<bits/stdc++.h>
using namespace std;
	
int x,y,m; 
int M = 0;
int max_M = 0;

void search(){
	if (M+x > m|| M+y > m){
		max_M = max(M, max_M);
		return;
	}
	
	M += x;
	search();
	M -= x;

	M += y;
	search();
	M -= y;
}

int main(){
	cin >> x >>  y >> m;
	search();
	cout << max_M;
}
