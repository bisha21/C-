#include<iostream>
using namespace std;
class complex{
	int real;
	int imaginary;
	public:
	void get_data()
	{
	cout<<"Enter the real value"<<endl;
	cin>>real;
	cout<<"Enter the imaginary value"<<endl;
    cin>>imaginary;
		}
	complex addnumber(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.imaginary=imaginary+c.imaginary;
		return temp;
	}
	void print(){
		cout<<"("<<real<<"+"<<imaginary<<"i)"<<endl;
	}
};
int main()
{
	complex c1,c2,c3;
	c1.get_data();
	c1.print();
	c2.get_data();
	c2.print();
	c3 = c2.addnumber(c1);
	c3.print();
	
}
