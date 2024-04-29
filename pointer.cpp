#include<iostream>
using namespace std;
int main()
{
	int *pi;
	float *pf;
	pi=new int;
	pf=new float;
	*pi=2;
	*pf=2.2222;
	cout<<*pi<<endl;
	cout<<*pf;
	delete pi;
	delete pf;
	cout<<pi;
	
}
