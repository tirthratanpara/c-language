#include<stdio.h>
void main()
{
	char c,r, x='A';
	for(r='A';r<='E';r++)
	{
		for(c='A';c<=r;c++)
		{
		   printf("%c ",x);
		   x++;
		   	
		}
		printf("\n");
	}     
}