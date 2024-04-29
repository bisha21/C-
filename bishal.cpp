#include<iostream>
using namespace std;
class std_detail{
	public:
	string name;
	int reg_no;
	string fac;
	int marks1;
	int marks2;
	int marks3;
	int marks4;
	int marks5;
	int add(){
	
	int total=marks1+marks2+marks3+marks4+marks5;
	cout<<"Total:"<<total;
	}
	int dispaly(){
		cout<<"name: "<<name<<endl;
		cout<<"registration number: "<<reg_no<<endl;
		cout<<"faculity: "<<fac<<endl;
		cout<<"mark: "<<marks1<<endl;
				cout<<"mark: "<<marks2<<endl;
		cout<<"mark: "<<marks3<<endl;
		cout<<"mark: "<<marks4<<endl;
				cout<<"mark: "<<marks5<<endl;

		
			}

};

int main()
{
	std_detail s;
	s.name= "bishal";
	s.reg_no=1234;
	s.fac = "csit";
	s.marks1=60;
	s.marks2=70;
	s.marks3=80;
	s.marks4=65;
	s.marks5 =75;
s.dispaly();
s.add();
		

}

