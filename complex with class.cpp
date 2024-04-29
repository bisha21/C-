#include<iostream>
using namespace std;
class complex;
class calculator{
	public:
	int	add(int a,int b)
	{
		return a+b;
		}
		int sumrealcomplex(complex,complex);
				int sumcomplex(complex,complex);

};
class complex{
	int a,b;
	friend class calculator;
	public:
		void setData(int x,int y){
			a=x;
			b=y;
		}
		

	
};
int calculator ::sumrealcomplex(complex o1,complex o2)
{
	return(o1.a+o2.a);
}
int calculator ::sumcomplex(complex o1,complex o2)
{
	return(o1.b+o2.b);
}
int main()
{
	complex o1,o2;
	calculator c;
	o1.setData(1,4);
	o2.setData(2,6);
	
int res=c.sumrealcomplex(o1,o2);
cout<<"THe sum of real part is\n "<<res<<endl;
int resc=c.sumcomplex(o1,o2);
cout<<"The complex number is"<<resc<<"+i"<<endl;

}
