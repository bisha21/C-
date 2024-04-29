#include<iostream>
using namespace std;
class complex{
	int real,imag;
	public:
		complex(int r,int i){
			real=r;
			imag=i;
			
		}
		complex(){
			real=0;
			imag=0;
			
		}
		void print(){
		cout<<real<<"feet"<<"+"<<imag<<"inch";
		}
		complex operator+(complex c){
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			temp.real=real+imag/12;
			temp.imag=imag%12;
			return temp;
		}
};
int main()

{complex c1(5,17);
c1.print();
complex c2(2,8);
c2.print();
complex c3;
c3=c1+c2;
c3.print();
	
}
