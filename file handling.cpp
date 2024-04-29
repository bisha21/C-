#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string st;
	ifstream in("sampl.txt");
	in>>st;
	getline(in,st);
	 cout<<st;
	
}
