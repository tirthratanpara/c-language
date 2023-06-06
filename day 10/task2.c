#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	
	a>b ? a>c ? printf("a is max") : printf("c is max") :b>c ? printf("b is max") : printf("c is max")  ;
}