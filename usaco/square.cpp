#include<bits/stdc++.h>
using namespace std;

struct Rect{
	int x1,y1,x2,y2;
	int area(){ return (x2-x1)*(y2-y1); };
};

int main(){
	freopen("square.in","r",stdin);
	freopen("square.out","w",stdout);

	Rect a,b,c;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

	c.x1 = min(a.x1,b.x1);
	c.x2 = max(a.x2,b.x2);
	c.y1 = min(a.y1,b.y1);
	c.y2 = max(a.y2,b.y2);
	
	int dist1 = c.x2 - c.x1;
	int dist2 = c.y2 - c.y1;
	int dist = max(dist1,dist2);
	cout << dist*dist << '\n';
}
