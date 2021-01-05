#include<bits/stdc++.h>
using namespace std;

int main(){
	int cap[3], v[3];
	
	for (int i=0;i<3;i++)
		cin >> cap[i] >> v[i];

	for (int i=0;i<100;i++){
		int a = i%3, b = (i+1)%3;
		int amt = min(v[a], cap[b] - v[b]);
		
		v[a] -= amt;
		v[b] += amt;
	}
	
	cout << v[0] << '\n' << v[1] << '\n' << v[2] << '\n';
}
