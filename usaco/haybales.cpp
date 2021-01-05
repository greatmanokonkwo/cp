#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("haybales.in","r",stdin);
	freopen("haybales.out","w",stdout);
	
	int n,q; cin >> n >> q;
	
	int arr[n]; 
	
	for (int i=0;i<n;i++)
		cin >> arr[i];


	sort(arr, arr+n);

	for (int i=0;i<q;i++){
		int b,e; cin >> b >> e;
		
		cout << upper_bound(arr,arr+n,e) - lower_bound(arr,arr+n,b) << '\n';
	}
}
