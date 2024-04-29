#include<stdio.h>
#include<stdbool.h>
void display(int);
int main(){
	int i;
	bool p[]={1,0};
	printf("p\t~p\n");
	printf("***************************************************************\n");
	for(i=0;i<2;i++)
	{
		display(p[i]);
		display(~p[i]);
		printf("\n");
	}
	return 0;
}
void display(int i){
	if(i==1)
		printf("T\t");
		else
		printf("F\t");
	
}
