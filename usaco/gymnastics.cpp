#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	
	int k,n; cin >> k >> n;
	int a[k][n]; 

	int i,j,l;
	int pos;
	for (i=0;i<k;i++){
		for (j=0;j<n;j++){
			cin >> pos;	
			a[i][pos-1] = k - j;
		}
	}

	int p=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			bool con;
			for (l=0;l<k;l++){
				if (a[l][i] > a[l][j]){
					con = true;
				} else {
					con = false;
					break;
				}
			}
			if (con) p++;
		}
	}
	cout << p;
}
