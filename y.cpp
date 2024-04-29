#include<iostream>
using namespace std;
int vol(int );
int vol(int,int,int);
int main()
{
	int l,b,h;
	int r;
	cout<<"Enter the length bredth and height of cuboid\n";
	cin>>l>>b>>h;
	cout<<"Enter the radius of sphere\n";
	cin>>r;
	cout<<"The voulume of cuboid is:\n"<<vol(l,b,h);
	cout<<"The volume of sphere is:\n"<<vol(r);
	
	
}
int vol(int x,int y,int z)
{
	int v=x*y*z;
	return v;
}
int vol(int a)
{
	float v =4/3*(3.14*a*a*a);
	return v;
}
