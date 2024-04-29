#include<iostream>
using namespace std;
int main()
{
	int ch,a,b;
	int sum,diff,mul;
	float div;
	cout<<"Enter two number\n";
	cin>>a>>b;
		cout<<"1>Add\n2.subtract\n3.multiply\n4.divide";

	cout<<"\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			sum=a+b;
		cout<<"the sum of two number \n"<<sum;
		
		break;
		case 2:
			diff=a-b;
		cout<<"the difference of two number\n"<<diff;
		break;
		case 3:
			mul=a*b;
		cout<<"the product of two number\n"<<mul;
		break;
	    case 4:
	    	div=a/b;
	    cout<<"\na divide b by:"<<div;
	    	break;
 default:
 	cout<<"Error";




			
	}
}

