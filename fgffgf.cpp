#include<iostream>
using namespace std;
class student{
	protected:
		int roll_no;
		public:
			void set_roll(int a)
			{
			roll_no =a;
			}
			void print_roll(){
				cout<<"Roll_NO:"<<roll_no;
			}
			
};
class test:virtual public student{
	protected:
		int physic,maths;
		public:
		void set_marks(int m,int p)
		{
			maths=m;
			physic=p;
		}
		void print_marks()
		{
			cout<<"your result is here:\n";
			cout<<"Maths:"<<maths<<endl;
			cout<<"physic:"<<physic<<endl;
			
		}
};
class sports:virtual public student{
	private:
		protected :
		int sc;
		public:
		void set_score(int s)
		{
			sc=s;
			
		}
		void print_score()
		{
			cout<<"score:"<<sc<<endl;			
		}
};
class result:public test ,public sports{
	private:
		float total;
		public:
		
			void display(){
				total=maths+physic+sc;
				print_roll();
				print_marks();
				print_score();
				cout<<"Total:"<<total;
				cout<<"YOur percenatge:"<<total/2;
			}
	
};
int main()
{
	result res;
	res.set_roll(100);
	res.set_marks(64,40);
	res.set_score(30);
	res.display();
	
	

}
