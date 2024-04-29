#include<iostream>
#include<cmath>
using namespace std;
class calculator
{
	int a,b;
	public:
	void get_datas()
	{
		cout<<"Enter the value for a:\n";
		cin>>a;
		cout<<"Enter the value for b:\n";
		cin>>b;
		}
		void displays()
		{
			cout<<"sum of and b:"<<a+b<<endl;
			cout<<"difference of and b:"<<a-b<<endl;
			cout<<"product of and b:"<<a*b<<endl;
			cout<<"b divide a:"<<float(a/b)<<endl;
		}
};
class s_calc{ 
    int a1,a2,b1,b2;
	
	public:
		void get_dataa(){
			cout<<"Enter the value to find square:\n";
			cin>>a1;
			cout<<"Enter the value to find sqare root\n";
			cin>>a2;
			cout<<"Enter the value of angle\n";
			cin>>b1;
			cout<<"Enter the value to find log function\n";
			cin>>b2;
			}
			void displayn(){
			cout<<"square of a1:"<<pow(a1,2)<<endl;
			cout<<"square root of a2:"<<sqrt(a2)<<endl;
			cout<<"THE value of cos(a):"<<cos(b1)<<endl;
			cout<<"THe value of log function::"<<log(b2)<<endl;
				}
	
};
class hybrid:public calculator,public s_calc{
	
};
int main(){
	 hybrid c;
	
	c.get_datas();
	cout<<"************Basic calculator*************"<<endl;
		c.displays();

c.get_dataa();
	cout<<"************scientific calculator*************"<<endl;

	c.displayn();
	
}
