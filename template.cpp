#include<iostream>
using namespace std;
template <class T>
class vector{
	public:
		T *arr;
		int size;
		vector (int m)
		{
			size =m;
			arr=new T[size];
		}
		T dotproduct(vector &v){
			T d=0;
			for(int i=0;i<size;i++)
			{
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
		
};
int main()
{
	vector<float>v1(3);
	v1.arr[0]=1.1;
	v1.arr[1]=2.1;
	v1.arr[3]=3.1;
	vector<float>v2(3);
	v2.arr[0]=2.1;
	v2.arr[1]=5.1;
	v2.arr[3]=4.1;
	float a=v1.dotproduct(v2);
	cout<<a;
	
}
