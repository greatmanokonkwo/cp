#include <bits/stdc++.h>

#define ASCII_NUM 48

using namespace std;

int char_to_int(char c){
	int i = c - ASCII_NUM;
	if (i < 10) return i;
	else {
		cout << "NOT A NUMBER";
		return -1; 
	}
}

int main (){	
	string s = "hello world";
	for(auto i=s.begin();i!=s.end();i++) cout << *i << "\n";
}
