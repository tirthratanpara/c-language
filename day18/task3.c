#include<stdio.h>
void main(){
	 
	int n,i,sum=0,avg;
	printf("enter the number of element:");
	scanf("%d",&n);

    int a[n];
    
	for(i=0;i<n;i++){
		printf("enter the number %d:",i+1);
		scanf("%d",&a[i]);
		
		sum += a[i];
}
	avg = sum/n;
	printf("average = %d",avg);
}