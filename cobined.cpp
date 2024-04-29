#include<iostream>
#include<string.h>
using namespace std;
class string{
	char str[20];
	public:
		void read(){
			cout<<"enter the string\n";
			cin>>str;
		}
		void print(){
			cout<<str<<endl;

		}
		string operator+(string x){
			string t;
			strcpy(t.str,str);
			strcat(t.str,x.str);
			return t;
		}
	
};
int main(){
	string s1,s2,s3;
	s1.read();
	s1.print();
	s2.read();
	s2.print();
	s3=s1+s2;
	s3.print();
	
	
}
