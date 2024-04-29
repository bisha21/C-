#include<iostream>
using namespace std;
class distance{
	
	int feet,inches;
	public:
		void get_data(int i,int f)
		{
			feet=f;
			inches=i;
		}
		distance operator+(distance d2)
		{
			distance temp;
			temp.feet=feet+d2.feet;
			inches=inches+d2.inches;
			temp.feet=temp.feet+temp.inches/12;
			temp.inches=temp.inches%12;
			return temp;
		}
		void print()
		{
			cout<<"("<<feet<<"Feet,"<<inches<<"Inches"<<")";
		}
};

int main()
{
	distance d1,d2,d3;
	d1.get_data(9,10);
	d2.get_data(22,21);
	d3=d1+d2;
	
	d3.print();
	
	
	
}
