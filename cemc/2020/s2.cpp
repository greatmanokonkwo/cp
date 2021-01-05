#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> vals(1000010);
bool searched[1010][1010];

string search(pair<int,int> lastCell){
	queue<pair<int,int>> q;
	q.push(lastCell);
	
	pair<int,int> cell;
	while(!q.empty()){
		cell = q.front(); q.pop();
		vector<pair<int,int>> neighbors = vals[cell.first * cell.second];
		
		for (pair<int,int> neighbor : neighbors){
			if (neighbor.first == 1 && neighbor.second == 1){
				return "yes";
			} else if (!searched[neighbor.first][neighbor.second]){
				q.push(neighbor);
				searched[neighbor.first][neighbor.second] = true;
			}
		}
	}
	return "no";
}

int main(){
	int m,n; cin >> m >> n;
	pair<int,int> last_cell;
		
	int i,j,val;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			cin >> val;
			vals[val].push_back(make_pair(i,j));

			if (i==m && j==n) last_cell = make_pair(i,j);
		}
	}

	cout << search(last_cell);	
}
