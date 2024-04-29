#include<stdio.h>
#include<stdbool.h>
void display(int);
int main(){
	int i;
	bool p[]={1,1,0,0};
	bool q[]={1,0,1,0};
	printf("p\tq\tp^q\n");
	printf("***************************************************************\n");
	for(i=0;i<4;i++)
	{
		display(p[i]);
		display(q[i]);
		display(p[i]&&q[i]);
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
