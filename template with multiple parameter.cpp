#include<iostream>
using namespace std;
template <class t,class u>

class my_class{
	public:
		t data1;
		u data2;
		my_class( t a,u b){
			data1=a;
			data2=b;
		}
		void display()
		{
			cout<<"Sum is "<<data1+data2;
		}
	
	
};
int main()
{
	my_class <int,float> obj(1,1.1221);
	obj.display();
}
