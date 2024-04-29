#include<iostream>
#include<cmath>
using namespace std;
class point{
	int x,y;
	friend point distance(point a1,point b1);
	public:
	void set_data(int a,int b)
	{
		x=a;
		y=b;

		
	}
	void print(){
		cout<<"The point is\n("<<x<<","<<y<<")"<<endl;
	}
};
point distance(point a1,point b1){
	point d;
d.set_data(sqrt(pow(b1.x-a1.x,2)+pow(b1.y-a1.x,2));
return d;
}
int main(){
	point p,q,r;
	p.set_data(3,5);
	p.print();
	q.set_data(4,6);
	q.print();
	r=distance(p,q);
	r.print();
	
}
