#include<bits/stdc++.h>
using namespace std;

int grid[] = {1,2,3,4};

void h_flip(){
	int temp1 = grid[0];
	int temp2 = grid[1];
	
	grid[0] = grid[2];
	grid[1] = grid[3];
	
	grid[2] = temp1;
	grid[3] = temp2;
}

void v_flip(){
	int temp1 = grid[0];
	int temp2 = grid[2];
	
	grid[0] = grid[1];
	grid[2] = grid[3];
	
	grid[1] = temp1;
	grid[3] = temp2;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	char c;
	while(cin>>c){
		if (c=='H') h_flip();
		else v_flip();
	}		
	
	cout << grid[0] << ' ' << grid[1] << '\n';
	cout << grid[2] << ' ' << grid[3] << '\n';
}
