#include<stdio.h>
void main()
{
	int i = 1;
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	do
	{
         if(i%2==1){
		 printf("%d is odd\n",i);
			
		}i++;
		
	}while(i<=n);
	    
	}