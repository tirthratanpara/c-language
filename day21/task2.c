#include<stdio.h>
#include<string.h>


void main(){
	char a[] ="tirth@gmail.com";
	 char b[] = "0987654321";
	
	char c[20];
	char d[20];
	
	printf("enter your email:");
	scanf("%s",&c);
	printf("enter your password :");
	scanf(" %s",&d);
	int z = strcmp(a,c);
	int y = strcmp(b,d);
	 
	if(z==0 && y==0)
	{
		printf("you login succesfully");
	}
	else{
		printf("invalid!!! please try again");
	}
	
	 
}