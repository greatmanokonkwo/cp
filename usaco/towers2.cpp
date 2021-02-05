#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	
	int blocks[n];
	
	for (int i=0;i<n;i++)
		cin >> blocks[i];
	
	int prev = 0, max_seq = 0;
	
	int seq = 0;
	
	for (int i=0;i<n;i++){
		if (blocks[i] >= prev){
			seq++;
		} else{
			max_seq = max(max_seq, seq);
			seq = 0;
		}
		prev = blocks[i];
	}

	cout << max_seq;
}
