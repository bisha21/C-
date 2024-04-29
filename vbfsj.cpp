#include<iostream>
using namespace std;
int add(int*a[5],int i){
	for(i=0;i<5;i++)
	{
		add+=*(a+i);
	}
	return add;
}

int main(){
	int sum=0,i,a[5];
	cout<<"Enter the number";
		for(i=0;i<=5;i++)
{
	cin>>a[i];
}
	cout<<" the number"<<add(a,i);
		
}
