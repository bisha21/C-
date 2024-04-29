#include<iostream>
#include<fstream>
using  namespace std;
class student{
	int roll;
	char name[20];
	char address [50];
	public:
		void read_data();
		void write_data();
};
void student::read_data(){
	cout<<"enter the name of student\n";
	cin>>name;
	cout<<"enter the roll of student\n";
	cin>>roll;
		cout<<"enter the address of student\n";
	cin>>address;
}
void student::write_data(){
		cout<<" the name of student\n"<<name<<endl;
		cout<<" the roll of student\n"<<roll<<endl;
		cout<<" the address of student\n"<<address<<endl;
	
}
int main()
{
	student s;
	ifstream fin;
	fin.open("student.dat");
	for(int i=0;i<2;i++)
	{
		
		fin.read((char*)&s,sizeof(student));
		s.write_data();
	}
	fin.close();
	cout<<"Writing is complete";
}
