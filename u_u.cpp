#include<iostream>
using namespace std;
class distanc{
	int inch,feet;
	public:
		distanc(){
			inch=feet=0;
		}
		distanc(int f,int i){
			feet=f;
			inch=i;
		}
		void display(){
			cout<<"("<<feet<<"ft,"<<inch<<"inch)";
		}
};
class dist{
	int meter,centimeter;
	public:
		dist(int m,int c){
			meter=m;
			centimeter=c;
		}
		operator distanc()
		{
			distanc d;
			int f,i;
			f=meter*3.3;
			i=centimeter*0.4;
			f=f+i/12;
			i=i%12;
			return distanc(f,i);
		}
};
int main(){
	distanc d1;
	dist d2(4,50);
	d1=d2;
	d1.display();
}
