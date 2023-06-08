#include<stdio.h>
void main()
{
    int i =1;
    int n,sum;
	printf("enter value: ");
	scanf("%d",&n);
	while(i<=n){
		sum = sum+i;
		i++;
	}
	printf("sum : %d",sum);
}