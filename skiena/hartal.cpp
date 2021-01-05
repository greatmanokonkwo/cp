#include<iostream>

using namespace std;

int n_lost(int steps[], int n, int p){
	int i,d,sum;
	//create an array of length sim_days
	bool cal_days[n] = {false};
	// create an array for the week days
	int wkdys[5] = {0,0,0,0,0};
	// for i in num of party
	for (i=0; i<p;i++){
		d = 0;
		// while day less than num of days
		while(d + steps[i] <= n){
			d+=steps[i]; 
			// if (arr[day] < 1)
			if (!cal_days[d-1])
				cal_days[d-1] = true;
		}
	}
	
	for (i=0;i<n;i++){
		if ((i+1)%7==0||(i+2)%7==0) continue;
		wkdys[i%7]+=((int)cal_days[i]);
	}
	sum = 0;
	for (i=0;i<5;i++){
		sum+=wkdys[i];
	}
	return sum;
}

int main(){
	freopen("hartal.txt","r",stdin);

	int t,n,p,i,j;
	cin >> t;
	for(i=0; i<t; i++){
		cin >> n;
		cin >> p;
		int steps[p];
		for (j=0;j<p;j++){
			cin >> steps[j];
		}
		cout << n_lost(steps, n, p) << endl;
	}
}
