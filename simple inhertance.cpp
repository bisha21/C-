#include<iostream>
using namespace std;
class employee{
		public :
	int id;
		float salary;
		employee(int inpid){
			id=inpid;
			salary=40000.111;
		}
		employee(){
		}
};
class programmer:public employee{
	public:
	int lc;
	programmer(int inpid)
	{
		id = inpid;
		lc=400;
		
	}
	void getDAta(){
		cout<<id<<endl;
	}
};
int main(){
	employee e(2),emp(5);
	cout<<e.salary<<endl;
	cout<<emp.salary<<endl;
	programmer p(10);
	cout<<p.lc<<endl;
	p.getDAta();
	cout<<p.id<<endl;
}
