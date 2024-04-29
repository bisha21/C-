#include<iostream>
using namespace std;
int main(){
	int m[]={12,13,14,15,16};
	int *p=m;
	int i,s;
	for(i=0;i<=4;i++)
	s+=*(m+i);
	
	cout<<"sum="<<s;
}
