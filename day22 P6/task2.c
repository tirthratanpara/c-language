#include<stdio.h>
#include<string.h>
void main(){
	
	char a[100],i;
	printf("enter value :");
	scanf("%s",&a);
	
	for(i=0;i<=strlen(a);i++){
		if(a[i]>='a'  && a[i]<='z' ){
		a[i]-=32;
	}
		else if(a[i]>='A'  && a[i]<='Z' ){
		a[i]+=32;
		
	}
}
		
	printf("%s",a);

	
}