#include<iostream>
using namespace std;
class hello {
	private:
	int kilogram;
	int gram;
	public:
		void set_data(int kg,int g){
			kilogram=kg;
			gram=g;
		}
		void addhello(hello d1,hello d2)
		{
			kilogram=d1.kilogram+d2.kilogram;
			gram =d1.gram+d2.gram;
			kilogram=kilogram+gram/1000;
			gram=gram%1000;
		}
		void display(){
			cout<<"("<<kilogram<<"kg"<<","<<gram<<"g"<<")"<<endl;
		}
};
int main(){
	 hello b,i,s;
	
	b.set_data(5,600);
	cout<<"weight1=";
	b.display();
	i.set_data(7,800);
	cout<<"weight2=";
	i.display();
	s.addhello(b,i);
		cout<<"total weight=";
		s.display();

	
}
