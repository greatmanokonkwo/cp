#include<iostream>

using namespace std;

int main(){
	for(int j=0;j<2;j++){
		int a = 3;
		int p[a];
		int i;
		for(i=0;i<3;i++){
			p[i] = i;
		}	
		for (i=0;i<3;i++)
			cout << p[i];
	}
}
