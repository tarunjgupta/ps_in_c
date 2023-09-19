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
		for(j=i;j<i+c;j++)
		{
			printf("%d",j);
		}
		for(k=j-2;k>(j-2-(c-1));k--)
		{
			printf("%d",k);
		}
	    printf("\n");
	}
	return 0;
}
