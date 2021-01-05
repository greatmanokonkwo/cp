#include<bits/stdc++.h>

#define keyname "Erdos, P."

using namespace std;

vector<string> names; // names of professors for each paper
map<string,int> name_num; // map of professor names with their erdos numbers

void read_names(){
	string line; getline(cin, line);
	line = line.substr(0,line.find(":"));
	int com_pos;
	while(com_pos>=0) {
		com_pos = line.find(",",line.find(",")+1);
		if (com_pos >= 0){
			names.push_back(line.substr(0,com_pos));
			line = line.substr(com_pos+2,line.size());
		} else {
			names.push_back(line.substr(0,line.size()));
		};
	}
}

void add_names(string &max_prof, int erd_n){
	for (auto i=names.begin();i!=names.end();i++){
		if ((*i)!=max_prof) name_num[*i] = erd_n+1;
	}
}

void solve(int t){
	cout << "Scenario " << t+1 << "\n";
	int i,j;
	int p,n; cin >> p; cin >> n;
	string name; getline(cin,name); // creates name variable for later step of finding erdos number for a given 
	string max_prof; int max_erdos; // holds the value of the author who has the highest erdos number 
	for (i=0;i<p;i++){
		read_names();
		max_erdos = INT_MAX-1;
		for (j=0;j<names.size();j++){ // iterate through a papers names and check if the published with erdos
			if (names[j]==keyname) {
				max_erdos = 0; max_prof = keyname;
				break;
			}
			if (name_num.count(names[j])){
				if (max_erdos>name_num[names[j]]){
					max_erdos = name_num[names[j]];
					max_prof = names[j];
				}
			}
		}
		add_names(max_prof,max_erdos);
		names.clear();
	}

	for (i=0;i<n;i++){
		getline(cin,name);
		if(name_num[name]==INT_MAX){
			cout << name << " infinity\n";
		} else {
			cout << name << " " << name_num[name] << "\n";	
		}
	}
}

int main(){
	//freopen("erdos.txt","r",stdin);
	
	int t; cin >> t;
	for (int i=0;i<t;i++) solve(i);
}
