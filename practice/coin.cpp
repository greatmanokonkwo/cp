#include <bits/stdc++.h>

using namespace std;

int t;
vector<int> coins;
int s = 0; int n=0; int c;

// efficient and correct 
int dynamic(int t){
	if (t<0) return INT_MAX-1;
	if (t==0) return 0;
	int min_c = INT_MAX-1;
	for (int i=0;i<c;i++) min_c = min(dynamic(t-coins[i])+1,min_c);
	return min_c;
}

// efficient but does not generalize
void greedy(){
	while(s < t && c>=0){
		if ((s+coins[c]) <= t) {
			s+=coins[c]; n++;
			cout << s << "\n";
		} else c--;
	}
}

int main(){
	int n; cin >> n;
	int num;
	for(int i=0;i<n;i++) {
		cin >> num; 
		coins.push_back(num);
	}
	cin >> t;
	c = coins.size();
	//greedy();
	cout << dynamic(t);
}
