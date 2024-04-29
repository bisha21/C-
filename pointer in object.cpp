#include<iostream>
using namespace std;
class ram{
	int age,roll_no;
	public:
		void set_data(int a,int b){
			age =a;
			roll_no=b;
		}
		void display()
		{
			cout<<"age of ram:"<<age<<endl;
			cout<<"roll no of ram:"<<roll_no<<endl;

		}
};
int main()
{
	ram *r=new ram();
	r->set_data(12,1);
	r->display();
	
}
