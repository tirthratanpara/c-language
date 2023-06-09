 #include<stdio.h>
void main()
{
    int i =1;
    int n,sum;
	printf("enter value: ");
	scanf("%d",&n);
	for(i =1;i<=n;i++){
		sum = sum+i;
		;
	}while(i<=n);
	printf("sum : %d",sum);
}