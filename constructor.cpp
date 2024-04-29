#include<iostream>
using namespace std;
class area{
	int length,bredth;
	public:
		area(int l,int b)
		{
			length=l;
			bredth=b;
			
		}
		void display(){
			cout<<"Length of rectangle:"<<length<<endl;
						cout<<"bredth of rectangle:"<<bredth<<endl;
			cout<<"area of rectangle:"<<length*bredth<<endl;

		}
};
int main(){
	area a(10,5);
	a.display();
	area c(10,4);
	c.display();
}
