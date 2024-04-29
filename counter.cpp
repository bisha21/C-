#include<iostream>
using namespace std;
class student{
	private:
		int roll_no;
		char name[20];
		static int count;
		public:
			void set_data(){
				cout<<"Enter the name and roll_no"<<endl;
				cin>>roll_no>>name;
				count++;
			}
		 static	void display_count(){
				cout<<"count::"<<count<<endl;
			}
};
int student::count=0;
int main(){
	student s1,s2,s3;
	student::display_count();
	s1.set_data();
	s1.display_count();
	s1.set_data();
	student::display_count();

	
	
}
