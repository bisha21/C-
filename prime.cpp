#include<iostream>
using namespace std;
class prime{
	int i,a,k;
	public:
					void display();

		prime(int x){
			a=x;
			k=1;
			for(i=2;i<=a/2;i++)
			{
				if(a%i==0){
					k=0;
					break;
				}else {
					k;
				}
				

					
				
			}
		}
		
};
 void prime::display(){
					if(k==1)
					cout<<a<<"Entered number is prime";
					else{
					
					cout<<a<<"Entered number is composite";
				}
				}
int main(){
		int a;
	cout<<"Enter the number to check prime";
	cin>>a;
	prime p(a);
	p.display();
}
