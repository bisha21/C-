#include<stdio.h>
int main(){
	int r,n,i;
	long a=1,b=1, c=1,C;
	printf("Enter the value for N and R\n");
	scanf("%d%d",&n,&r);
	for(  i=1;i<=n;i++){
		a*=i;
	}
	for(i=1;i<=(n-r);i++){
		b*=i;
	}
		for(i=1;i<=r;i++){
		c*=i;
	}
	C=a/(b*c);
	printf("C(%d,%d)=%d",n,r,C);
	
}

