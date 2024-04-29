#include<iostream>
using namespace std;
class total{
	float principle,time,rate;
	float findintrest(){
		return (principle*rate*time)/100;
		
	}
	public:
		void setdata(float p,float t,float r)
		{
			principle=p;
			time=t;
			rate=r;
			
		}
		float findtotal(){
			return (principle+findintrest());
		}
};
int main()
{
	float p,t,r,a;
	total ta;
	cout<<"ENter the value for principle,time and intrest\n";
	cin>>p>>t>>r;
	ta.setdata(p,t,r);
	a=ta.findtotal();
	cout<<"The total amount :"<<a;
}
