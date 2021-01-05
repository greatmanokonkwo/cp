#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define F(i,a,b) for(i=a;i>=b;i--)
	
using namespace std;

int cal_diff(vector<int> &a, vector<int> &b, int n){
	int i; int count=0;
	f(i,0,n) {
		if (a[i]!=b[i]) count++;
	}
	return count;
}

void solve(){
	vector<int> stack,temp,flips;
	int d, status, i, n; char c;
	while (true){
		do {
			if ((status=scanf("%d%c",&d,&c))!=EOF) stack.push_back(d);
		
		} while (c!='\n');
		if (status==EOF) break;
		
		// 	

		stack.clear(); flips.clear();
	}
}

int main(){
	freopen("flapjacks.txt","r",stdin);

	int t=1; //scanf("%d",&t);
	int i;
	f(i,0,t) solve(); 
}
