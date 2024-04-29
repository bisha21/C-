#include<iostream>
using namespace std;
template <class T>
class A{
	T a,b;
	public:
		A(T c,T d)
		{
			a=c;
			b=d;
		}
		T get_max(){
			T res;
			res=a>b?a:b;
			return res;
		}
		T sum(){
			cout<<"sum="<<a+b;
			
		}
	
};
int main(){
	A <int>obj1(12,3);

		cout<<"Largest number::"<<obj1.get_max();
		obj1.sum();
}
