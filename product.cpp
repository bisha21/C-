#include<iostream>
using namespace std;
int mul(int,int);
int main(){
	int a,b;
	cout<<"Enter the value for a&b\n";
	cin>>a>>b;
	cout<<"The product of entered number is:\n"<<mul(a,b);
}
int mul(int X,int Y){
	return X*Y;
}
