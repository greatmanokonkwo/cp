#include<bits/stdc++.h>
using namespace std;

using vi = vector<int>;
#define pb push_back

vector<bool> possibilities {false};
vector<int> choices,temp;
int n;

void search(int k){
	if (temp[n-1] < 0){
		possibilities.pb(false);
		return;
	}
	
	if (k==n-1){
		possibilities.pb(true);
		return;
	}

	if (k!=0 && temp[k]>0){
		temp[k]=-1;	
		search(k+1);
		temp[k] = choices[k];	
	} else {
		for (int i=0;i<n;i++){
			if (temp[i]>0){
				temp[i] = -1;
				search(k+1);
				temp[i] = choices[i];
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	
	int c; cin >> n;
	for (int i=0;i<n;i++){
		cin >> c;
		choices.pb(c);
	}

	temp = choices;

	search(0);

	double josh_win = 0.0;
	for (bool outcome : possibilities){ 
		if (outcome) josh_win+=outcome;
	}	
	cout << josh_win/possibilities.size();	
}

