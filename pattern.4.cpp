#include<stdio.h>
int main()
{
	int i,c,j;
	for(i=1;i<=4;i++)
	{
		c=i;
		for(j=i;j<i+c;j++)
		{
			printf("%c",(j+64));
		}
		printf("\n");
	}
	return 0;
}
