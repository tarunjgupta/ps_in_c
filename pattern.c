#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=(4-i);j++)
		{
			printf(" ");
		}
			for(k=i;k<=2*i-1;k++)
			{
					printf("%d ",k);
			}
			printf("\n");
	}
	return 0;
}