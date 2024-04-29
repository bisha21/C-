#include<iostream>
using namespace std;
class shop{
	int id;
	float price;
	public:
		void set_data(int i,float p)
		{
			id=i;
			price=p;
		}
		void get_data(){
			cout<<"id of item:"<<id<<endl;
			cout<<"price of item:"<<price<<endl;

		}
};
int main(){
	shop *ptr=new shop[5];
	int p,i;
	float q;
	shop *ptrt=ptr;
	for(i=0;i<5;i++){
		cout<<"enter the id & price of item"<<i+1<<endl;
		cin>>p>>q;
		ptr->set_data(p,q);
		ptr++;
	}
		for(i=0;i<5;i++){
ptrt->get_data();
 ptrt++;	
}
}
