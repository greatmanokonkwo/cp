#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define F(i,a,b) for(i=a;i>=b;i--)

using namespace std;

int main(){
	char c; int s;
	int points[2] {0};
	while(scanf("%c%d",&c,&s) != EOF)
		points[(int) (c-65)]+=s;	
		
	if (points[0] > points[1]) printf("A");
	else printf("B");
}
