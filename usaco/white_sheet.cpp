#include<bits/stdc++.h>
using namespace std;

using ll = long long;

pair<pair<int,int>, pair<int,int>> intersect(pair<int,int> a, pair<int,int> b, pair<int,int> c, pair<int,int> d){
	int lf, rg, up, dn;
	lf = max(min(a.first, b.first), min(c.first, d.first));
	rg = min(max(a.first, b.first), max(c.first, d.first));
	up = min(max(a.second, b.second), max(c.second, d.second));
	dn = max(min(a.second, b.second), min(c.second, d.second));

	if (rg <= lf || up <= dn) return {{0,0}, {0,0}};

	return {{lf,dn}, {rg, up}};
}

ll square(pair<int,int> a, pair<int,int> b){
	return (ll) abs(a.first - b.first) * abs(a.second - b.second);
}

int main(){
	vector<pair<int,int>>p(6);
	for (int i=0;i<6;i++)
		cin >> p[i].first >> p[i].second;

	pair<pair<int,int>, pair<int,int>> wb1 = intersect(p[0], p[1], p[2], p[3]);
	pair<pair<int,int>, pair<int,int>> wb2 = intersect(p[0], p[1], p[4], p[5]);
	pair<pair<int,int>, pair<int,int>> inter = intersect(wb1.first, wb1.second, wb2.first, wb2.second);

	ll swhite = square(p[0], p[1]);
	ll swb1 = square(wb1.first, wb1.second);
	ll swb2 = square(wb2.first, wb2.second);
	ll sinter = square(inter.first, inter.second);

	cout << (swhite > swb1 + swb2 - sinter ? "YES" : "NO") << '\n';
}
