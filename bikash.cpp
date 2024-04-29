#include<iostream>
using namespace std;
int add(int*x,int*y);
int main(){
	int sum,a,b;
cout<<"value"<<endl;
cin>>a>>b;
sum=add(&a,&b);
cout<<sum;
	
}
int add(int*x,int*y)
{
	return *x+*y;
}
