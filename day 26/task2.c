#include<stdio.h>
void main(){
	int *a,c;
	int *b;
	int x,y;
	
	printf("enter the value x :");
	scanf("%d",&x);
	printf("enter the value y :");
	scanf("%d",&y);
     
	 a=&x;
	 b=&y;
	
	
	c=*a;
	*a = *b;
    *b = c;
	
	printf("a =%d",x);
	printf("b =%d",y);
	
	
	
	
	
	
	
	
	
	
	
	 	
	 	
}
	