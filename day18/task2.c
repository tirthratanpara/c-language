#include<stdio.h>
void main()
{
	int a[] = {10,20,30,40,50};
	
	printf("length of array :%d",sizeof(a)/sizeof(a[0]));
}