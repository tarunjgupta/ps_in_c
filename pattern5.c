#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=5;i>=1;i--)
	{
		c=5-i+1;
		for(j=i;j<i+c;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}
