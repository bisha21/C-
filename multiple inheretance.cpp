#include<iostream>
using namespace std;
class teacher{
	int id;
	string subject;
	public:
		void gett(int a,string b)
		{
			id=a;
			subject=b;
		}
		void displayt(){
			cout<<"...............TEACHER..............\n";
			cout<<"ID:"<<id<<endl;
			cout<<"SUBJECT:"<<subject<<endl;
		}
		};
		
	class staff{
	int sid;
	string position;
	public:
		void getstaff(int c,string d)
		{
			sid=c;
			position=d;
		}
		void displaystaff(){
			cout<<"........STAFF................\n";
			cout<<" id:"<<sid<<endl;
			cout<<"position:"<<position<<endl;
		}
		
	
};

class coordinator:public staff,public teacher{
	string dep;
	public:
	void getdata(){
		gett(11,"math");
		getstaff(12,"fifth");
		cout<<"Enter the department\n";
		cin>>dep;
	}
	void display(){
		displayt();
		displaystaff();
		cout<<"Department:"<<dep;
	}
};
int main()
{ coordinator c;
c.getdata();
cout<<"----------COORDINATOR DETAIL----------------------\n";

c.display();
	
}
