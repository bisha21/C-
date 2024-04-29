#include<iostream>
using namespace std;
int add_5(int a);
int main()
{
	int a;
	cout<<"Enter the number to increment by 5\n";
	cin>>a;
	cout<<"value after increment=\n"<<add_5(a);
}
inline int add_5(int a){
	return a+5;
}

