#include<stdio.h>
void main ()
{
	int a,i=1,b=1;
	printf("enter any value:");
	scanf("%d",&a);
	while(i<=a)
	
	{
	    b=b*i;	
	    i++;
	}
	
	printf("factorial of %d is :%d",a,b);
}