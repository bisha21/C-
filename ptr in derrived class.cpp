#include<iostream>
using namespace std;
class base{
	
	public:
		int var_base;
		void display(){
		cout<<"displaying the variable of base"<<var_base<<endl;
		}
		
};
class derrived:public base{
	
public:
	int derr_var;
		virtual void display(){
		cout<<"displaying the variable of base"<<var_base<<endl;
		cout<<"displaying the variable of derrived"<<derr_var<<endl;
		}
};
int main(){
	base *base_pointer;
	base base_obj;
	derrived *dp;
	derrived od;
	base_pointer=&od;
	base_pointer->var_base=34;
	base_pointer->display();
	dp=&od;
	dp->var_base=3333;
	dp->derr_var=4444;
	dp->display();
}
