#include<stdio.h>
void main(){
	
	int i,a[10];
	
	for(i=0;i<10;i++){
		
		printf("enter the elements of array 1: ",i);
		scanf("%d",&a[i]);
		
	}
	int b[10];
	
	for(i=0;i<10;i++){
		
		printf("enter the elements of array 2: ",i);
		scanf("%d",&b[i]);
	}
	int c[10];
	printf("element of array after merge :");
	
	for(i=0;i<10;i++){
		c[i] = a[i];
		c[i+10] = b[i];
	}
	for(i=0;i<10;i++){
		printf("%d",c[i]);
	}
}