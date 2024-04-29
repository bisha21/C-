#include<iostream>
using namespace std;
class employee{
	
		public:
		void get_data()
		{
			
			cout<<"Enter the name id and salary of the student\n";
			cin>>ename>>eid>>salary;
			cout<<"Enter the date of birth of employee\n";
			db.get_data();
			}
			
			void display(){
				cout<<"Eid="<<eid<<endl;
				cout<<"Ename="<<ename<<endl;
				cout<<"salary="<<salary<<endl;
            cout<<"DOB"<<endl;
           db.displayDOB();

			}
		

class DOB{
	int y,m,d;
	public:
		void get_data(){
			cout<<"Enter the year\n";
			cin>>y;
				cout<<"Enter the month\n";
			cin>>m;	
			cout<<"Enter the day\n";
			cin>>d;
		}
		void displayDOB()
		{
			cout<<y<<"-"<<m<<"-"<<d;
		}
};
private:
		char ename[50];
		int salary,eid;
		DOB db;
};
int main()
{
	
	employee e;
	e.get_data();
	e.display();
}
