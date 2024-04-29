#include<iostream>
#include<fstream>
using namespace std;
struct student{
	int roll,cls;
	char name[20];
};
int main()
{
	ofstream fout;
	fout.open("student.dat");
	student s;
		cout<<"Enter the class of studnet\n";
	cin>>s.cls;
	cout<<"Enter the name of studnet\n";
	cin>>s.name;
	cout<<"Enter the roll of studnet\n";
	cin>>s.roll;
	fout.write((char*)&s,sizeof(student));
	fout.close();

}
