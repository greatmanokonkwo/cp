#include<bits/stdc++.h>
using namespace std;

bool two_man(char a, char b, char c){
	if (c == a || c == b || b == a) return true;
	else return false;
}

bool one_man(char a, char b, char c){
	if (a == b && b == c) return true;
	else return false;
}

int main(){
	freopen("tttt.in","r",stdin);
	freopen("tttt.out","w",stdout);
	char board[3][3];
	
	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			cin	>> board[i][j];

	int wins[2] = {0,0};

	for (int i=0;i<3;i++){
		if (two_man(board[i][0], board[i][1], board[i][2])) wins[1]++;
		if (one_man(board[i][0], board[i][1], board[i][2])) wins[0]++;
		if (two_man(board[0][i], board[1][i], board[2][i])) wins[1]++;
		if (one_man(board[0][i], board[1][i], board[2][i])) wins[0]++;
	}
	
	if (two_man(board[0][0], board[1][1], board[2][2])) wins[1]++;
	if (two_man(board[0][2], board[1][1], board[2][0])) wins[1]++;
	if (one_man(board[0][0], board[1][1], board[2][2])) wins[0]++;
	if (one_man(board[0][2], board[1][1], board[2][0])) wins[0]++;

	cout << wins[0] << '\n' << wins[1];
}
