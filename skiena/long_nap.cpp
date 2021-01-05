#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define F(i,a,b) for(i=a;i>=b;i--)

#define MIN_TIME "10:00"
#define MAX_TIME "18:00"

#define ASCII_UPPER 65
#define ASCII_LOWER 97
#define ASCII_NUM 48

#define MIN_H 10
#define MAX_H 18
#define MAX_M 60

using namespace std;

int time_to_int(char time[4]){
	char h1 = time[0]; char h2 = time[1]; char m1 = time[2]; char m2 = time[3];
	int h = (((int) (h1-ASCII_NUM))*10 + ((int) (h2-ASCII_NUM))) - MIN_H;
	int m = ((int) (m1-ASCII_NUM))*10 + ((int) (m2-ASCII_NUM));
	return (h*MAX_M + m);
}

pair<int,int> int_to_time(int time){
	pair<int,int> ans;
	ans.first = time%MIN_H;
	ans.second = time - ans.first*MIN_H;
	return ans;
}

int main(){
	freopen("long_nap.txt","r",stdin);
	
	int t=1;	
	int n,i;
	char s_time[4];
	vector<int> t_diffs;	
	
	string junk;
	int max_n, diff, max_diff = 0;
	while(cin >> n){
		char* times[n*2 + 2]; times[0] = MIN_TIME; times[n*2 +1] = MAX_TIME;		
		f(i,0,n){ 
			scanf("%s", times[(i*2 +1)]);
			scanf("%s", times[(i*2 +2)]);	
			cout << times[i*2 +1] << " " << times[i*2 +2] << "\n";
			getline(cin,junk);	
		}

		f(i,0,n+1){
			diff = time_to_int(times[i*2 + 1]) - time_to_int(times[i*2]);
			if (diff > max_diff){
				max_n = i*2;
				max_diff = diff;
			}
		}	

		pair<int,int> time = int_to_time(max_diff);
		printf("Day #%d: the longest nap starts at %s and will last for ",t, times[max_n]);
		if (time.first > 0) printf("%d hours and ",time.first);
		printf("%d minutes.\n",time.second);
		t++;
	} 
}	
