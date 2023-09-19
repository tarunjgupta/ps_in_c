#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=0;i<6;i++)
	{
		for(j=1;j<=(6-i);j++)
		{
			printf("%d",j);
		}
		for(j=1;j<=2*i-1;j++)
		{
			c=1;
			printf(" ");
		}
		for(j=(5-i+c);j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
