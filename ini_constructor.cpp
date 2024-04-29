#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test(int i,int j):a(2*i){
			b=j;
		cout<<"Constructer is executed"<<endl;
		cout<<"Value of a"<<a<<endl;
		cout<<"Value of b "<<b<<endl;

		}
};
int main(){
	test t(1,2);
}
