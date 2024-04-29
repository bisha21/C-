#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,count=0;
	char str[50];
	printf("Enter the string\n");
	gets(str);
	  for(i=0;i<strlen(str);i++)
	  {
            if(strcmp("o",str))
	  	count++;
	  	 printf("%d",count);
	  }
	  printf("%d",count);
	
}
