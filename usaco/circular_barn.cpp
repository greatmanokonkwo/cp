#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("cbarn.in","r",stdin);
	freopen("cbarn.out","w",stdout);
	int n; cin >> n;

	int rooms[n];		
	int sum = 0;		
	for (int i=0;i<n;i++){
		cin >> rooms[i];
		sum += rooms[i];
	}
	
	int min_dist = INT_MAX;
	for (int i=0;i<n;i++){
		int dist = 0;
		int temp = sum;
		int count = 1;
		for(int j=0;j<n;j++){
			temp-=rooms[(i+j)%n];
			dist+=temp*count;	
		}
		min_dist = min(min_dist,dist);
	}

	cout << min_dist;
}
