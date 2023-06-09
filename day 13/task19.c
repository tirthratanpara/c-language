#include<stdio.h>
void main ()
{
	int a,i,b;
	printf("enter any value:");
	scanf("%d",&a);
	for(i=1,b=1;i<=a;i++)
	
	{
	    b=b*i;	
	    
	}
	
	printf("factorial of %d is :%d",a,b);
}