#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
	return a.first > b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("rental.in", "r", stdin);
	freopen("rental.out", "w", stdout);

	int n, m, r; cin >> n >> m >> r;

	vector<int> production(n);
	for (int i=0;i<n;i++)
		cin >> produce[i];

	vector<pair<int,int>> shops(m);
	for (int i=0;i<m;i++)
		cin >> shop[i].second >> shop[i].first;

	vector<int> rent(r);
	for (int i=0;i<r;i++)
		cin >> rent[i];

	sort(rent.begin(), rent.end(), greater<int>());
	sort(shops.begin(), shops.end(), cmp);
	sort(production.begin(), production.end(), greater<int>()):
	
	int iShop = 0;
	int iRent = 0;
	int i=0;
	ll sol = 0;

	while(i<n)
