#include<bits/stdc++.h>

#define f(i,a,b) for (i=a;i<b;i++)

using namespace std;

vector<int> pan_stack;
vector<int> flips;

void solve(){
	int d; string line;
	int min_d,max_d;
		
	getline(cin,line);
	while(stringstream(line) >> d){
		min_d = min(min_d,d); max_d = max(max_d,d);
		pan_stack.push_back(d);
	}

	while(*pan_stack.begin()!=min_d && *(pan_stack.end()-1)!=max_d){
		//reverse(pan_stack.begin(), pan_stack.end()-i+1);
	}
	// output 
	for (auto a=pan_stack.begin();a!=pan_stack.end();a++) cout << *a << ' ';
	cout << '\n';
	for (auto a=flips.begin();a!=flips.end();a++) cout << *a << ' ';
	cout << 0 << '\n';
	pan_stack.clear(); flips.clear();
}

int main(){
	freopen("stack_flaps.txt","r",stdin);
	while (!cin.eof()) solve();
}
