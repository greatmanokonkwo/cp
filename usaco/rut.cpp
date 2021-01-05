#include<bits/stdc++.h>
using namespace std;

int max_x = 0;
pair<int,int> coords[1001];

int dist_end(const pair<int,int>& a){
	int dist_x = max_x - a.first; 
	int dist_y = a.second - 1;

	return dist_x*dist_x + dist_y*dist_y;
}

bool cmp(int a, int b){
	return dist_end(coords[a]) < dist_end(coords[b]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n; cin >> n;

	int indices[n];
	char direction[n];
	int stops[n];
	for (int i=0;i<n;i++)
		stops[i] = 0;	
	
	for (int i=0;i<n;i++){
		indices[i] = i;
		cin >> direction[i];
		cin >> coords[i].first >> coords[i].second;	
		max_x = max(coords[i].first, max_x);
	}

	sort(indices, indices+n, cmp);

	int i,j;
	for (i=0;i<n;i++){
		int index = indices[i];
		
		if (direction[index] == 'N'){
			for (j=i+1;j<n;j++){
				int index_j = indices[j];
				if (direction[index_j] == 'E'){
					int dist_x = max(coords[index_j].first, coords[index].first) - min(coords[index_j].first, coords[index].first);
					int dist_y = max(coords[index_j].second, coords[index].second) - min(coords[index_j].second, coords[index].second);
				
					if (dist_x == dist_y) continue;	

					if (dist_y < dist_x)
						stops[index] += (stops[index_j] + 1);
					else
						break;
				}	
			}
		} else {
			for (j=i-1;j>=0;j--){
				int index_j = indices[j];
				if (direction[index_j] == 'N'){
					int dist_x = max(coords[index_j].first, coords[index].first) - min(coords[index_j].first, coords[index].first);
					int dist_y = max(coords[index_j].second, coords[index].second) - min(coords[index_j].second, coords[index].second);
					
					if (dist_x == dist_y) continue;	

					if (dist_y > dist_x)
						stops[index] += (stops[index_j] + 1);
					else
						break;

				}	
			}
		}
	}

	for (int i=0;i<n;i++)
		cout << stops[i] << '\n';
}
