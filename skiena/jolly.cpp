#include<iostream>
#include<stdio.h>
#include<queue>
#include<cmath>

using namespace std;

string jolly_j(queue<int>& q, int n){
	priority_queue<int> diff;
	int num, i;
	for (i=0; i<(n-1);i++){
		num = q.front();
		q.pop();
		diff.push(abs(num - q.front()));
	}
	q.pop();

	for(i=(n-1); i>0;i--){
		if (!(diff.top()==i)){
			return "Not Jolly";
		}
		diff.pop();
	}		

	return "Jolly";

	// count equal to n 
}

int main(){	
	int i, n, num;
	queue<int> nums;

	while(cin >> n){
		for (i=0;i<n;i++){
			cin >> num;
			nums.push(num);
		}
		cout << jolly_j(nums, n);
	}	
 }
