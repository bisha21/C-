#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		string name;
		public:
		void get_data(int r,string na)
		{
			roll=r;
			name=na;
		}
		void display(){
			cout<<"Roll no:"<<roll<<endl;
			cout<<"name:"<<name<<endl;
		}
		
};
class marks:public student{
	private:
		int m1,m2,m3;
		public:
			
			void get_marks(int a,int b,int c)
			{
				get_data(50,"bishal");
				m1=a;
				m2=b;
				m3=c;
			}
			void display_data(){
				display();
				cout<<"Marks1:"<<m1<<endl;
				cout<<"Marks2:"<<m2<<endl;
				cout<<"Marks3:"<<m3<<endl;

			}
};
int main()
{
	marks mk;
	mk.get_marks(70,80,60);
	mk.display_data();
	return 0;
}
