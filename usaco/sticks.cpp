#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin >> n;
	
	int sticks[n];
	for (int i=0;i<n;i++)
		cin >> sticks[i];
	
	sort (sticks, sticks+n);
	
	int median = sticks[n/2];
	
	long long ans = 0;
	for (int i=0;i<n;i++)
		ans += abs(sticks[i] - median);	

	cout << ans;
}
