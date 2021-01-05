#include <bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)

#define DIRS_N 8

using namespace std;

int start_i; int start_j;
int m,n; bool found;

int D[][2] {{-1,-1},{-1,0},{-1,1},
			{0,-1},{0,1},
			{1,-1},{1,0},{1,1}};

void find_w(vector<string> &grid, string w, int pos_i, int pos_j, int k){	
	if (!found){
		if (k==w.size()){
			cout << start_i+1 << " " << start_j+1 << "\n"; found = true;
			return;
		}
		
		if (tolower(w[k])!=grid[pos_i][pos_j]) return;	
		
		int i; int temp_i,temp_j;
		f (i,0,DIRS_N){
			temp_i = pos_i+D[i][0];	temp_j = pos_j+D[i][1];
			if (temp_i>=0&&temp_j>=0&&temp_i<m&&temp_j<n) 
				find_w(grid,w,temp_i,temp_j,k+1);
		}
	}
}

void  find_w2(vector<string> &grid, string w, int start_i, int start_j){
	int i,j;
	int pos_i,pos_j;	
	int temp_i,temp_j;
	//for direction in D
	f(i,0,DIRS_N){
		// set to start position
		pos_i = start_i; pos_j = start_j;
		j=0;
		while (j<w.size() && tolower(w[j])==grid[pos_i][pos_j]) { 
			temp_i=pos_i+D[i][0]; temp_j=pos_j+D[i][1];
			if (temp_i>=0&&temp_j>=0&&temp_i<m&&temp_j<n)
				pos_i=temp_i; pos_j=temp_j;
			j++;
		} 

		if(j==w.size()){ 
			cout << start_i+1 << " " << start_j+1 << "\n";
			break;
		}
	}
}

void solve(){
	vector<string> grid; string line;
	int i,j,k;
	cin >> m >> n;
	char c;
	f(i,0,m){
		f(j,0,n){
			cin >> c;
			line.push_back(tolower(c));	
		}
		grid.push_back(line);
		line.clear();
	}

	int w; cin >> w;// number of words to find
	string word; string constr;
	f(i,0,w){
		constr = "";
		getline(cin,word);
		found = false;
		f(j,0,m){
			f(k,0,n){
				if (!found){
					start_i=j; start_j=k;
					find_w(grid,word,j,k,0);
				}
				//find_w2(grid,word,j,k);
			}
		}
	}
}

int main(){
	freopen("waldorf.txt","r",stdin);

	int t; cin >> t; // number of cases
	int i; // counter
	f(i,0,t) solve();
}
