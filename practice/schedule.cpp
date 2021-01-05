#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> schedule;

void algo1(){
	
}

int main(){
	freopen("schedule.txt","r",stdin);
	
	int n; scanf("%d",&n);
	pair<int,int> event;
	for (int i=0;i<n;i++){
		scanf("%d %d",&event.first,&event.second);
		schedule.push_back(event);
	}
	
}
