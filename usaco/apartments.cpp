#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n,m,k; 
	cin >> n >> m >> k;

	int people[n], places[m];

	for(int i=0;i<n;i++)
		cin >> people[i];
	
	for (int i=0;i<m;i++)
		cin >> places[i];
	
	sort (people, people+n);
	sort (places, places+m);

	int i=0, j=0;
	int ans = 0;
	while(i<n && j<m){
		if (abs(people[i] - places[j]) <= k){
			i++; j++;
			ans++;
		} else {
			if (people[i] - places[j] > k)
				j++;
			else
				i++;
		}
	}
	
	cout << ans;
}
