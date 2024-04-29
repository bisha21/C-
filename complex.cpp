#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
	friend complex get_data(complex o1,complex o2);
		void set_data(int x,int y){
			a=x;
			b=y;
			
		}
		
		void print()
		{
			cout<<"The complex number is\n"<<a<<"+"<<b<<"i\n";		}
	
};
complex get_data(complex o1,complex o2){
	complex o3;
	o3.set_data((o1.a+o2.a),(o1.b+o2.b));
	return o3;
		}
int main(){
	complex c1,c2,sum;
	c1.set_data(3,5);
	c1.print();
	c2.set_data(7,5);
	c2.print();
	sum=get_data(c1,c2);
	sum.print();
	
}
