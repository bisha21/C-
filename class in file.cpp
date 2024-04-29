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
	ofstream fout;
	fout.open("student.dat");
	for(int i=0;i<2;i++)
	{
		s.read_data();
		fout.write((char*)&s,sizeof(student));
	}
	fout.close();
	cout<<"Writing is complete";
}
