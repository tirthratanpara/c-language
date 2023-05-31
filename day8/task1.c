#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("%d is minimum",a);
		
	}
	if(b<a)
	{
		printf("%d is minimum",b);
	}
}