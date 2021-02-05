#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n,x;
	cin >> n >> x;
	
	int w[n];
	
	for (int i=0;i<n;i++)
		cin >> w[i];

	sort(w, w+n);
	
	int i=0,j=n-1;

	int ans=0;	
	
	bool g[n] {false};
	
	while(i<j){
		if (w[i] + w[j] <= x){
			g[i] = g[j] = true;
			i++;j--;
			ans++;
		} else{
			j--;
		}
	}
	
	for (int i=0;i<n;i++)
		if (g[i] == false) ans++;

	cout << ans;
}
