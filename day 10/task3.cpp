#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	printf("enter the value of d:");
	scanf("%d",&d);
	
	
	a>b 
	?
	 a>c
	  ? 
	    a>d
		?
		    printf("a is max") 
		    : 
		printf("d is max")
		:
		    c>d ?
	  	printf("c is max")
		    : 
			    printf("d is max")
	  : 
	  
	    b>c?
		
		   b>d ?
		      printf("b id max ")
		      : printf(" d is max")
		:  c>d  
		    ? printf("c is max ")
		:printf("d is max");
		return 0;      
}