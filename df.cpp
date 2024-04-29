#include<iostream>
using namespace std;
int sum(int w,int x,int y=0,int z=0);
int main()
{
	cout<<sum(5,10)<<endl;
	cout<<sum(5,10,15)<<endl;
	cout<<sum(5,10,15,20)<<endl;
}
int sum(int w,int x,int y,int z)

{
	return w+x+y+z;
}


