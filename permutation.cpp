#include<stdio.h>
int main(){
	int r,n,i;
	long f1=1,f2=1,p;
	printf("Enter the value for N and R\n");
	scanf("%d%d",&n,&r);
	for(  i=1;i<=n;i++){
		f1*=i;
	}
	for(i=1;i<=(n-r);i++){
		f2*=i;
	}
	p=f1/f2;
	printf("P(%d,%d)=%d",n,r,p);
	
}

