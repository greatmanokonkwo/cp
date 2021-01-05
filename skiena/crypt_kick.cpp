#include<bits/stdc++.h>
using namespace std;

vector<string> dict;
vector<string> sentence;
map<char,char> mapping;

bool found {false};

int sent_len;

bool in_dict(string word){
	for (auto w=dict.begin();w!=dict.end();w++){
		if (!strcmp((*w).c_str(), word.c_str())) 
			return true;
	}
	return false;
}

void decrypt(int k){
	if (k==sent_len) found = true;
	
	if (!found){
		for (auto w=dict.begin();w!=dict.end();w++){
			if ((*w).size() == sentence[k].size()){
				string build_str {""};	
				for (auto l=(*w).begin();l!=(*w).end();l++){
					char c = sentence[k][l - (*w).begin()];
					if (!mapping.count(c))
						mapping[c] = *l; 
					build_str.push_back(mapping[c]);
				}
				if (in_dict(build_str))
					decrypt(k+1);
			}
		}
	}
}

void setIO(string name=""){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	if (name.size()){
		freopen((name+".in").c_str(), "r", stdin);
//		freopen((name+".out").c_str(), "w", stdout);
	}
}

int main(){
	
	setIO("crypt_kick");	
	mapping[' '] = ' ';
		
	int i; // counter variables
	int n; cin >> n;
	string word;	
	while(n--){
		cin >> word;
		dict.push_back(word); 
	}

	string input;
	getline(cin,input);
	while (!cin.eof()) {
		getline(cin,input);
		stringstream line(input);
		
		while (line >> word) sentence.push_back(word);
		sent_len = sentence.size();		
		decrypt(0);
		if (found) {
			for (auto l=input.begin(); l!=input.end();l++)
				cout << mapping[*l];
		} else {
			for (auto w=sentence.begin(); w!=sentence.end();w++){
				for (i=0;i<(*w).size();i++) cout << '*';
				cout << ' ';
			}
		}
		cout << '\n';
		sentence.clear();	
	} 
}
