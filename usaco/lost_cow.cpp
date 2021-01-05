#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);

	int x,y; cin >> x >> y;
	int start = x;
	int d = 1;	
	int dist = 0;	
	int c = 1;
	while(x!=y){
		for (int i=0;i<c+c/2;i++){
			x+=d;
			dist++;
			if (x==y) break;
		}
		d*=-1;
		c*=2;
	}
	
	cout << dist;
}
