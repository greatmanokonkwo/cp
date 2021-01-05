#include<bits/stdc++.h>
using namespace std;

vector<int> coins, val;
vector<bool> ready; 

int dynamic(int target){
	if (ready[target]) return val[target];

	if (target == 0) return 0;
	int best = INT_MAX;
	if (target < 0) return best;	

	for (auto c: coins)
		best = min(best,dynamic(target-c)+1);

	ready[target] = true;
	val[target] = best;
	
	return best;	
} 

int main(){
	int t,coin; cin >> t;

	while(cin >> coin){
		cout << coin;	
		coins.push_back(coin);
	}

	for (int i=0;i<=t;i++){
		ready.push_back(false); 
		val.push_back(0);	
	}	

	cout << dynamic(t) << '\n';
}	
