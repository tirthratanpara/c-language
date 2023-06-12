#include<stdio.h>
void main()
{
    int a,b=1;	
    printf("enter any no. :");
    scanf("%d",&a);
    do 
    {
    	printf("%d x %d = %d\n",a,b,a*b);
    	b++;
	}while(b<=10);
}