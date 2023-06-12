#include<stdio.h>
void main()
{
	int a=0,i;
	printf(" enter the value:");
	scanf("%d",&i)	;
	while(i!=0)
	{
		i=i/10;
		a++;
	} 
	printf("%d",a);
}