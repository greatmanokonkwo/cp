#include<bits/stdc++.h>
using namespace std;

int n;
int arr[10][10];

int to_flip(int a, int b){
	int cnt = 0;
	int i,j;
	for (i=0;i<a;i++)
		for (j=0;j<b;j++)
			cnt += arr[i][j];

	return cnt;
}

void make_flip(){
	int i,j;

	int max_a, max_b;
	int max_f = 0;	

	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			int f = to_flip(i,j);
			if (f > max_f){
				max_f = f;
				max_a = i; max_b = j;
			}
		}
	}

	for (i=0;i<max_a;i++){
		for (j=0;j<max_b;j++){
			if (arr[i][j] == 1)
				arr[i][j] = 0;
			else 
				arr[i][j] = 1;
		}
	}
} 
			
int main(){
	freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);

	cin >> n;

	string line;
	for (int i=0;i<n;i++){
		cin >> line;
		for (int j=0;j<n;j++){
			arr[i][j] = line[j] - 48;
		}
	}

	int count = 0;
	
	while(to_flip(n,n) != 0){
		count++;	
		make_flip();
	}

	cout << count;
}
