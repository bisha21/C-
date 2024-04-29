#include<iostream>
#include<cmath>
using namespace std;
class complex{
	int a,b;
	friend complex sum(complex,complex);
	public:
		void set_data(int x ,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"("<<a<<","<<b<<")"<<endl;
		}
};
complex sum(complex o1,complex o2){
	complex o3;
	o3.set_data(sqrt(pow((o2.a-o1.a),2)+pow((o2.b-o1.b),2)));
	return o3;
}
int main(){
	complex c,c1,d;
	c.set_data(3,4);
	c.display();
	c1.set_data(1,2);
	c1.display();
	d=sum(c,c1);
	d.display();
}
