#include<iostream>
using namespace std;
class weight{
	int kg;
	public:
		weight(){
			kg=0;
		}
		weight(int a){
			kg=a;
		}
		void print(){
			cout<<"weight in kg:\n"<<kg<<endl;
			
		}
		void operator ++(){
			++kg;
		}
		void operator ++(int){
			kg++;
		}
		void operator --(){
			--kg;
		}
		void operator --(int){
			kg--;
		}
};
int main()
{
	weight o;
	o.print();
	o.operator ++();
	o.print();
	o.operator ++();
	o.print();
	o.operator --();
	o.print();
	o.operator --();
	o.print();
	
	
}
