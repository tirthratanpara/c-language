#include<stdio.h>
void main(){
	  
	int n,i;
	
	printf("enter size of array :");
	scanf("%d",&n);
	
	
	int a[n];
	
	for(i=0;i<n;i++){
		
		printf("enter the value of array1:");
		scanf("%d",&a[i]);
		
	}
	
	int b[n];
	for(i=0;i<n;i++){
		
		printf("enter the value of array1:");
		scanf("%d",&b[i]);
	}
	int c[n];
	for(i=0;i<n;i++){
		
		c[i] = a[i] + b[i];
		
	}
	
	printf("sum of two array is : \n");
	
	for(i=0;i<n;i++){
		printf("%d",c[i]);
		
	}
	
	 
	  
	  
	
}