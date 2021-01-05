#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define F(i,a,b) for(i=a;i>=b;i--)

using namespace std;

void solve(){
	int n; scanf("%d",&n);
	int addresses[n]; 
	int a; char c; int i;
	f(i,0,n)
		scanf(" %d",&addresses[i]);

	sort(addresses,addresses+n);
	int opt = addresses[n/2];
	
	int sum_dist = 0;
	f(i,0,n)
		sum_dist+=abs(opt-addresses[i]);

	printf("%d\n",sum_dist);
}

int main(){
	//freopen("vito.txt","r",stdin);

	int t=1; scanf("%d\n",&t);
	int i;
	f(i,0,t) solve(); 
}
