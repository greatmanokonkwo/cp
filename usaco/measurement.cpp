#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("measurement.in","r",stdin);
	freopen("measurement.out","w",stdout);	

	vector<tuple<int,int,int>> records;
	
	int n; scanf("%d", &n);
	
	int day; char* cow; char sign; int change;
	for (int i=0;i<n;i++){
		scanf("%d %s %c%d", &day, cow, &sign, &change);
		
		if (sign == '-') change = -change;
		int id;
		
		string temp = cow;	
		if (temp.compare("Bessie") == 0) id = 0;
		if (temp.compare("Elsie") == 0) id = 1;
		if (temp.compare("Mildred") == 0) id = 2;
	
		records.push_back(make_tuple(day,id,change)); 
	}

	sort(records.begin(),records.end());
	
	int galls[3] = {7,7,7};

	vector<int> board {0,1,2};	
	
	int num = 0;
	for (auto record : records){
		vector<int> temp = board;
		galls[get<1>(record)]+=get<2>(record);
		
		int max_o = 0;
		for(int i=0;i<3;i++)
			max_o = max(max_o,galls[i]);
	
		board.clear();
		for (int i=0;i<3;i++)
			if (galls[i] == max_o) board.push_back(i);	

		if (board.size() != temp.size()){
			num++;
		} else{
			for (int i=0;i<board.size();i++){
				if (board[i] != temp[i]){
					num++;
					break;
				}
			}
		}
	}

	cout << num;
}
