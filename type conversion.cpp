#include<iostream>
using namespace std;
class distanc{
	private:
		int feet,inches;
		public:
			distanc(int f,int i){
				feet=f;
				inches=i;
				
			}
			operator float(){
				float a=feet+inches/12.0;
				return a;
			
		}
		
};

int main(){
	distanc d(4,6);
	float x=(float)d;
	cout<<x;
	
	
}
