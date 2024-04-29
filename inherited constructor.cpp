#include<iostream>
using namespace std;
class base1{
	int data1;
	public:
		base1(int a){
			data1 =a;
			cout<<"base1 constructor is called"<<endl;
			
		}
		void print1(){
			cout<<data1;
		}
		
};
class base2{
	int data2;
	public:
		base2(int a){
			data2 =a;
			cout<<"base2 constructor is called"<<endl;
			
		}
		void print3(){
			cout<<data2;
		}
		
};
class derrived:public base1,public base2{
	int data3;
	public:
		derrived(int a,int b,int c):base1(a),base2(b){
			data3 =a;
			cout<<"derrived constructor is called"<<endl;
			
		}
		void print3(){
			cout<<data3;
		}
		
};
int main(){
	derrived d(1,2,3);
	d.print1();
	d.base2::print3();
}
