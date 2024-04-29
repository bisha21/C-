#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three number";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		cout<<a<<" is the largest";
		else
				cout<<b<<" is the largest";

	}
	else{
	if(c>b)
	cout<<c<<" is the largest";
	else
	cout<<b<<" is the largest";
			

				

	}
}
