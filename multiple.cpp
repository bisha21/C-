#include<iostream>
using namespace std;
class employee{
	int eid;
	float salary;
	public:
		void gett(int a,float b)
		{
			eid=a;
			salary=b;
		}
		void displayt(){
			cout<<"...............Employee..............\n";
			cout<<"ID:"<<eid<<endl;
			cout<<"salary:"<<salary<<endl;
		}
		};
		
	class engineer:public employee{
	
	string dept;
	public:
		void geteng ()
		{
			gett(12,50000.00);
			cout<<"enter the department:\n";
			cin>>dept;
			
		}
		void displayeng(){
			cout<<"........engineer................\n";
			displayt();
			cout<<"department:"<<dept<<endl;
		}
		
	
};

class typist:public employee{
	int ts;
	public:
	void getdata(){
		gett(13,45000.00);
		
		cout<<"Enter the typing speed\n";
		cin>>ts;
	}
	void display(){
		displayt();
		cout<<"typing speed:"<<ts;
	}
};
int main()
{ engineer er;
typist t;
er.geteng();
er.displayeng();
t.getdata();
t.display();
	
}
