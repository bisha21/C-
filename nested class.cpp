#include<iostream>
using namespace std;
class employee{
		private:
	int id,sal;
		char name[20];
		dob db;
	
	public:
		void getdata{
		
		cout<<"Enter the name id & salary of an employee ";
		cin>>name>>id>>sal;
		db.getdob();
	}
	void display{
		cout<<"Name of employee:"<<name<<endl;
		cout<<"Id pf emp;oyee:"<<id<<endl;
		cout<<"salary of employee:"<<sal<<endl;
		
	
	}
	class dob{
		int y,m,d;
		public:
			void dob(void){
				cout<<"Enter year month & day\n";
				cin>>y>>m>>d;
			}
			void displaydob()
			{
				cout<<y<<"-"<<m<<"-"<<d;
			}
	};

};
int main()
{
	employee e;
	e.getdata();
	cout<<"#####detail of employee is ###########\n";
	e.display();
}
