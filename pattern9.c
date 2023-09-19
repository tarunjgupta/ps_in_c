#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=(3-i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
	    printf("\n");
	}
	for(i=2;i>=1;i--)
	{
		c=i;
		for(j=1;j<=(2-c+1);j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
