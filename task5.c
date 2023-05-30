#include<stdio.h>
int main()
{
	int celsius,fahrenheit;
	float a=1.8;
	printf("enter temperature in celsius:");
	scanf("%d",&celsius);
	fahrenheit=(celsius*a)+32;
	printf("enter temperature in fahrenheit:%d",fahrenheit);
	return 0;
	
	
}