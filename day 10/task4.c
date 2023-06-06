#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	printf("enter the value of d:");
	scanf("%d",&d);
	printf("enter the value of e:");
	scanf("%d",&e);
	
	
	
	a>b 
	?
	 a>c
	  ? 
	    a>d
		?
		a>e?
		    printf("a is max") 
		    : 
		printf("e is max") :
		d>e 
		?  printf("d is max")
		:
			printf("e is max")
		:
		    c>d ?
		    c>e ?
		
	  	printf("c is max")
		    : 
			    printf("e is max") :
			    d>e ? 
			    printf("d is max")
			    : printf(" e is max")
			    
	  : 
	  
	    b>c?
		
		   b>d ?
		      b>e ?
			  printf("b id max ")
		      : printf(" e is max") 
		      :
		      d>e ?
		      printf("d is max ")
		      : printf(" e is max")
		:  c>d  
		    ? 
			c>e ?
			printf("c is max ")
		:printf("e is max") :
		d>e ?
		printf("d is max")
		: printf("e is max");
		return 0;      
}