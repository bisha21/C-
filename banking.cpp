#include<iostream>
using namespace std;
class bank{
	char name[20];
	long int acc_no;
	char acc_type[20];
	int bal;
	public:
		void  opbal();
		void deposite();
		void withdraw();
		void display();	
};
 void bank::opbal(){
 	cout<<"Enter the name"<<endl;
 	cin>>name;
 	cout<<"Enter the acc_type"<<endl;
 	cin>>acc_type;
 	cout<<"Enter the acc-no"<<endl;
 	cin>>acc_no;
 	cout<<"Enter the balance"<<endl;
 	cin>>bal;
 	
 }
 void bank::deposite(){
 	int deposite=0;
 	cout<<"Enter the deposite amount"<<endl;
 	cin>>deposite;
 	bal+=deposite;
 	 	cout<<"You have deposite rs"<<deposite<<endl;
 	cout<<"After deposite your amount ::"<<bal;
 }
 void bank::withdraw(){
 		int withdraw=0;
 	cout<<"Enter the withdraw amount"<<endl;
 	cin>>withdraw;
 	bal-=withdraw;
 	cout<<"You have withdraw rs"<<withdraw<<endl;
 	cout<<"After withdraw your balance ::"<<bal;
 	
 }
 void bank::display(){
 	cout<<"Your name ::"<<name<<endl;
 	cout<<"Your account numbeer is ::"<<acc_no<<endl;
 	cout<<"Your accout type ::"<<acc_type<<endl; 
	 	cout<<"Your balance ::"<<bal<<endl;


 }
 int main(){
 	bank b;
 	b.opbal();
 	int ch;
 	cout<<"please select your choice"<<endl;
 	cout<<"1.check your detail\n2.deposite amount\n3.withdraw amount\n";
 	cout<<"Enter your choice"<<endl;
 	cin>>ch;
 	switch(ch){
 		case 1:
 		b.display();
 		break;
 		case 2:
 			b.deposite();
 			break;
 			case 3:
 				b.withdraw();
	 }
 
 }
