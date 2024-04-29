#include<iostream>
using namespace std;
template<class T>
class base{
	T a;
	public:
		void set(T val)
		{
			a=val;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
		}
};
template <class T>
class derrived:public base<T>{
	private:
		int b;
		public:
			void get(T val1,T val2)
			{
				base<T>::set(val1);
				b=val2;
			}
			void dis(){
				base<T>::display();
				cout<<"b="<<b<<endl;
			T sum=val1+b;
			}
};
int main()
{
	derrived<int>x;
	x.get(1,2);
x.dis();
}
