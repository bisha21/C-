#include<iostream>
using namespace std;
class employee{
		
	int id[10];
	string name[50];
	int sal[10];
	int count;
	public:
				void initcount(void) {count=0;}

	void set_data(){
			cout<<"Enter the id of employee"<<count+1<<endl;
		cin>>id[count];
		cout<<"Enter the name of employee"<<count+1<<endl;
		cin>>name[count];
	
		cout<<"Enter the salary of employee"<<count+1<<endl;
		cin>>sal[count];
		count++;
		
	}
	void get_data(){
	for(int i=0;i<count;i++){
	cout<<"name of emlpyee no "<<id[i]<<"is"<<name[i]<<endl;
	cout<<"salary of emlpyee no "<<id[i]<<"is"<<sal[i]<<endl;

		
	}
	}
};
int main(){
	employee e;
	e.initcount();
	e.set_data();
	e.set_data();
	e.get_data();
}
