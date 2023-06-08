#include<stdio.h>
void main()
{
	int i = 1;
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("%d \n",n);
		n--;
	}
}