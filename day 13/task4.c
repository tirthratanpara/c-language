#include<stdio.h>
void main()
{
	int i = 1;
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	do
	{
		printf("%d \n",n);
		n--;
	}while (i<=n);
}