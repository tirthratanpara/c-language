#include<stdio.h>

void sum(int a,int b){
	printf("%d\n",a+b);
	
}
void min(int a,int b){
	printf("%d\n",a-b);
	
}
void multi(int a,int b){
	printf("%d\n",a*b);
	
}
void div(int a,int b){
	printf("%d\n",a/b);
	
}

void main(){
	int a,b;
	char c;
	while(1){
	
	
	
	printf("enter first value :");
	scanf("%d",&a);
		printf("enter second  value :");
	scanf("%d",&b);
		printf("enter operation :");
	scanf(" %c",&c);
	
	switch(c){
		case'+':
			sum(a,b);
			break;
		case'-':
			min(a,b);
			break;	
			
		case'/':
			div(a,b);
			break;
		case'*':
			multi(a,b);
			break;
		default:
		printf("invalid ");
					
	}
}
}