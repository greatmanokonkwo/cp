#include<bits/stdc++.h>

using namespace std;

const string kybrd = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./  ";
int main(){
	string line;
	getline(cin,line);	
	char c;
	for(int i=0;i<line.size();i++){
		c = line[i];
		if (c=='`'||c=='Q'||c=='A'||c=='Z'||c==' ') continue;
		line[i] = kybrd[kybrd.find(c)-1];
	}
	cout << line << "\n";
}
