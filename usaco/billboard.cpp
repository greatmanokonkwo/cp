#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
	int x1,y1,x2,y2;
	int area() { return (x2-x1)*(y2-y1); };
};

int intersection(Rectangle r1, Rectangle r2){
	int xOverlap = max(0,min(r1.x2, r2.x2) - max(r1.x1, r2.x1));
	int yOverlap = max(0,min(r1.y2, r2.y2) - max(r1.y1, r2.y1));	
	return xOverlap*yOverlap;
}

int main(){
	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);
	
	Rectangle a, b, t;
	
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	cout << a.area() + b.area() - intersection(b,t) - intersection(a,t) << '\n';
}
