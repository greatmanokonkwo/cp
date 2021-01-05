#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll fib(int n){
	double five_sqrt = sqrt(5);
	return (1/five_sqrt) * (pow((1 + five_sqrt)/2,n) - pow((1 - five_sqrt)/2,n)); 
}

int main(){
	ll start, end; 

	cin >> start >> end;
	
	while (start+end){
		int n = 0, count = 0;
		while(true){
			ll fib_n = fib(n);
			if (fib_n >= start){
				if (fib_n <= end){
					count++;
				} else {
					break;
				}
			}
			n++;
		}
		cout << count << '\n';	
		cin >> start >> end;
	}
}
