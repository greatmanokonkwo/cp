#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	
	int i,j;
	int count = 1;
	char c,prev;
	scanf("%c",&c);	
	for (i=0;i<t;i++){
		scanf("%c",&c);	
		while (c!='\n') {
			prev = c;	
			scanf("%c",&c);
			if (prev==c) {
				count++;
			} else {
				cout << count << ' ' << prev << ' ';
				count = 1;
			}
		}
		cout << '\n';  	
	}
}
