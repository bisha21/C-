#include<stdio.h>
int main()
{
	int i,j,k;
	int a[]={5,4,6,2,1};
	int temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]<a[j]){
			 temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	printf("%d\t",a[i]);
}
