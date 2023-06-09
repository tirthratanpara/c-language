#include<stdio.h>
void main()
{
    int i =1;
    int n,sum;
	printf("enter value: ");
	scanf("%d",&n);
	do{
		sum = sum+i;
		i++;
	}while(i<=n);
	printf("sum : %d",sum);
}