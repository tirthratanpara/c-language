#include<stdio.h>
void main(){
	int n,i;
	
	
	
	printf("enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the element:[%d] :",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
		
	}
}