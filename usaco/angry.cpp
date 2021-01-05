#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("angry.in","r",stdin);
	freopen("angry.out","w",stdout);

	int n; cin >> n;
	int bays[n];
	
	for (int i=0;i<n;i++)
		cin >> bays[i];

	sort(bays,bays+n);
	
	int max_bays = -1;
	
	queue<pair<int,int>> Q;
	
	for (int i=0;i<n;i++){
		int n_bays = 0;
		bool visited[n];
		for (int j=0;j<n;j++) visited[i] = false;

		Q.push({i,1});
		while(!Q.empty()){
			pair<int,int> bay = Q.front(); Q.pop();
			n_bays++;
			for (int j=0;j<n;j++){
				if ((abs(bays[bay.first] - bays[j]) <= bay.second) && !visited[j]){
					visited[j] = true;
					if (j != bay.first) Q.push({j,bay.second+1});
				}
			}
		}
		max_bays = max(max_bays,n_bays);
	}	

	cout << max_bays;
}
