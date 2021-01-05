#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	
	int scens[3] = {0,0,0};
	int game[3] = {1,2,3};
	while(n--){
		int a,b,g; cin >> a >> b >> g;
		swap(game[a-1],game[b-1]);	
		scens[game[g-1]]++;
	}

	int max_i = 0;	
	for (int i=0;i<3;i++)
		max_i = max(max_i,scens[i]);
	
	cout << max_i;
}
			
	
