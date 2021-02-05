#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	
	int n;
	cin >> n;
	
	int psum[3][n+1];
	
	for (int i=0;i<3;i++)
		psum[i][0] = 0;

	int max_ids[3] {0};

	char hand;
	
	for (int i=1;i<=n;i++){
		cin >> hand;
		
		for (int j=0;j<3;j++)
			psum[j][i] = psum[j][i-1];
	
		if (hand == 'H'){
			psum[0][i]++; max_ids[0] = i;
		} else if (hand == 'P'){
			psum[1][i]++; max_ids[1] = i;
		} else if (hand == 'S'){
			psum[2][i]++; max_ids[2] = i;
		}
	}

	int ans = 0;
	
	for (int i=0;i<3;i++){
		int max_i = max_ids[i];
		for (int j=0;j<3;j++){
			if (i!=j){ 
				int max_j = max_ids[j];
				if (max_i < max_j){
					cerr << psum[i][max_i] << ' ' << psum[j][max_j] - psum[j][max_i] << '\n';
					ans = max(ans, psum[i][max_i] + (psum[j][max_j] - psum[j][max_i]));	
				} else{
					cerr << psum[i][max_i] << '\n';
					ans = max(ans, psum[i][max_i]);
				}
			}	
		}
	}

	cout << ans;
}
