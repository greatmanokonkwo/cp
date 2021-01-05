#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	
	ll a[3]; cin >> a[0] >> a[1] >> a[2];
	sort (a, a+3);
	ll d1 = (a[1] - a[0])-1;
	ll d2 = (a[2] - a[1])-1;

	if (d1 == 0 && d2 == 0)
		cout << "0\n";
	else if (d1 == 1 || d2 == 1)
		cout << "1\n";
	else 
		cout << "2\n";

	cout << max(d1, d2);
}
