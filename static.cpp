#include<iostream>
using namespace std;
class student{
	int roll_no;
	char name[20];
	static int count;
	public:
		void get_data()
		{
			cout<<"Enter the roll no and name of the student"<<endl;
			cin>>roll_no>>name;
			count++;
		}
		
			static void dispaly(){
				cout<<"count:"<<count<<endl;
				
			}
			
		
	
};
int student::count=0;
int main()
{
	student::dispaly();
	student s1,s2,s3;
	s1.get_data();
	s2.get_data();
	s3.get_data();
	s1.dispaly();
}
