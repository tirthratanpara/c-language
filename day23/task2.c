#include<stdio.h>

void div(int a)
{

     
	if(a%3==0 && a%5==0){
		printf("the no. is divisible by 3 and 5");
		
	}
	else {
			printf("the no. is not  divisible by 3 and 5");
		
		
	}
}
void main(){
	int a;
	printf("enter a value :");
	scanf("%d",&a);
	div(a);
}