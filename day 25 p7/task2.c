#include<stdio.h>
sum(int arr[],int n)
{
	int c=0,i;
	for(i=0;i<n;i++){
		c += arr[i];
	}
	printf("sum : %d",c);
	
}
void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n],i;
    for(i=0;i<n;i++){
    	printf("enter the value [%d] :",i);
    	scanf("%d",&arr[i]);
    	
	}	
	sum(arr,n);
}