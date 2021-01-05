#include<bits/stdc++.h>
using namespace std;

int loop(int s, int e){
	if (s==e){
		cout << s << '\n';
		return s;
	}

	int n = loop(s, e-1) +1;	
	cout << n << '\n';
	return n;
}

int main(){
	int a,b; cin >> a >> b;	
	loop(a,b);
}
