#include<stdio.h>
void main(){
	int a;
	int *b;
	
	printf("enter the value :");
	scanf("%d",&a);
	b =&a;
	printf("%d",(*b)*(*b));
}