#include<bits/stdc++.h>
using namespace std;

int n;
int arr[10][10];

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
	
	for (int i=n-1;i>=0;i--){
 	 	for (int j=n-1;j>=0;j--){
			if (arr[i][j] == 1){
				count++;
				for (int a=0;a<=i;a++){
					for (int b=0;b<=j;b++){
						if (arr[a][b] == 1)
							arr[a][b] = 0;
						else 
							arr[a][b] = 1;
					}
				} 
			}
		}
	}

	cout << count;
}
