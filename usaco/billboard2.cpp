#include<bits/stdc++.h>
using namespace std;

struct Rect{
	int x1,x2,y1,y2;
};

int main(){
	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);

	Rect a,b;
	
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	
	int xOverlap = max(0,min(a.x2,b.x2) - max(a.x1,a.x1));
	int yOverlap = max(0,min(a.y2,b.y2) - max(a.y1,a.y1));
		
	int xDist = a.x2 - a.x1;
	int yDist = a.y2 - a.y1;
	
	if (xOverlap == xDist){
		cout << (yDist - yOverlap)*xOverlap << '\n';
	} else if (yOverlap == yDist){
		cout << (xDist - xOverlap)*yOverlap << '\n';
	} else {
		cout << xDist*yDist << '\n';
	}
}
