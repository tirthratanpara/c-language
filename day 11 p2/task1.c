#include<stdio.h>
void main()
{
	char a;
	printf("enter any value:");
	scanf("%c",&a);
	if(a>='a' && a<='z')
	{
		printf("it is character ");
		
	}
	else if (a>='0' && a<='9')
	{
		printf("it is digit ");
	}
	else {
		printf("it is keyword ");
	}
}