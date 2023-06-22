#include<stdio.h>
void main(){
	int m,n,i,j;
	printf("enter the no. of rows :");
	scanf("%d",&n);
	printf("enter the no. of cols :");
	scanf("%d",&m);
	
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the value of matrix :");
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		
		}
		printf("\n");
	}
	int b[m][n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		b[j][i] = a[i][j];
		}
		
	}
	printf("tranpose of matrix :");
	printf("\n\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",b[i][j]);
		
		}
		printf("\n");
}
}