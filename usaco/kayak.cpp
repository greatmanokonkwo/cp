#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1000];
int b[1000];
int main(){
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));

	int n; cin >> n;
	int N = n*2;
	for (int i=0;i<N;i++)
		cin >> a[i];

	sort(a, a+N);
	int i,j,k;	
	int min_inst = INT_MAX;
	int t_inst;
	for (i=0;i<N;i++){
		for (j=i+1;j<N;j++){	
			t_inst = 0;	
			int x = 0;
			for (k=0;k<N;k++){
				if (k!=i&&k!=j){
					b[x++] = a[k];
					if(x%2==0)
						t_inst+=(abs(b[x-1] - b[x-2]));
				}
			}
			min_inst = min(t_inst, min_inst);
		}
	}
	
	cout << min_inst;
}
