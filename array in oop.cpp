#include<iostream>
using namespace std;
class shop{
	int itemId[100],itemprice[100];
	int counter;
	public:
		void initcouter(void) {counter =0;}
		void setprice(void);
		void displayprice(void);
		
};
void shop::setprice(){
	cout<<"enter the id of your item no"<<counter+1<<endl;
	cin>>itemId[counter];
	cout<<"enter the price of your item id"<<counter+1<<endl;
	cin>>itemprice[counter];
	counter++;
}
void shop::displayprice()
{
	for(int i=0;i<counter;i++)
	{
		cout<<"The price of item with id "<<itemId[i]<<"is"<<itemprice[i]<<endl;
		
	}
}
int main()
{
	shop s;
	s.initcouter();
s.setprice();
s.setprice();


	s.displayprice();
}
