#include<stdio.h>
void main ()
{
	int a,i=1,b=1;
	printf("enter any value:");
	scanf("%d",&a);
	do
	
	{
	    b=b*i;	
	    i++;
	}while(i<=a);
	
	printf("factorial of %d is :%d",a,b);
}