#include<stdio.h>
int main()
{
	int bs,hra,da,ta,gs;
	printf("enter the base salary:");
	scanf("%d",&bs);
	hra=(10*bs)/100;
	da=(5*bs)/100;
    ta=(8*bs)/100;
    gs= bs+hra+da+ta;
    printf("gross salary:%d",gs);
    return 0;
}