#include<stdio.h>
int main()
{
	int i,j,k,c;
	for(i=1;i<=4;i++)
	{
		c=i;
		for(j=1;j<=(4-i);j++)
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
