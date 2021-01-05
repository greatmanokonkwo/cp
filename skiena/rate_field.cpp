#include<bits/stdc++.h>
using namespace std;

struct suitor{
	string first, last;
	int height, weight;
		
	bool operator<(const suitor& s){
		if (s.height != height) return height < s.height;
		if (s.weight != weight) return weight < s.weight;
		int result=last.compare(s.last);
		if (result != 0) return result < 0;
		return first.compare(s.first) < 0;
	}
};

int main(){
	string first, last; int height, weight;

	suitor s;
	vector<suitor> suitors;
	while(cin >> s.first >> s.last >> height >> weight){
		s.height = abs(height - 180);
		if (weight > 75)
			s.weight = s.weight - 75;
		else 
			s.weight = -weight;
		suitors.push_back(s);
	}
	
	sort(suitors.begin(), suitors.end());
	
	for (auto s: suitors)
		cout << s.last << ", " << s.first << '\n';
}
