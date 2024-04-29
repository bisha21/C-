#include<iostream>
using namespace std;
class student{
	int roll;
	string name;
	public:
		void getstudent()
		{
			cout<<"Enter the name of student\n";
			cin>>name;
			cout<<"Enter the roll_no of student\n";
			cin>>roll;
			
		}
		void displays(){
			cout<<"Name of student:\n"<<name;
			cout<<"\nROll-NO:"<<roll;
		}
	};
		class marks:public student{
			int s1,s2,s3;
			public:
				void getm(){
					cout<<"Enter the marks in three subject\n";
					cin>>s1>>s2>>s3;
					
				}
				void displaym(){
					cout<<"subject1:"<<s1<<endl;
					cout<<"subject2:"<<s2<<endl;
					cout<<"subject3:"<<s3<<endl;

				}
				int totalm(){
					return s1+s2+s3;
				}
		};
class result:public marks{
	float total,per;
	public:
		void getData()
		{
			getstudent();
			getm();
		}
		void display(){
			displays();
			displaym();
			total=totalm();
			per=total/3;
			cout<<"total marks:"<<total<<endl;
			cout<<"percentage:"<<per<<endl;


		}
};
int main()
{
	result r;
	r.getData();
	r.getData();
	cout<<"___________________RESULT DETAIL_____________________________"<<endl;
	cout<<"***********************************************************************"<<endl;
	cout<<endl;
	r.display();
	r.display();

	

}
