#include <stdio.h>

void  main()
{
	int i,n,t1=0,t2=1;
	int nextterm=t1+t2;
	printf("enter the value :");
	scanf("%d",&n);
	printf(" fibonacci series : %d %d ",t1,t2);
	for (i=3;i<=n;++i){
		printf("%d",nextterm);
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
		
	}
}