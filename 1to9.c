#include<stdio.h>
int main()
{
	int i,j,ctr;
	for(j=1;j<=4;j++)
	{
		ctr++;
		for(i=j;i<=(j+ctr-1);i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
