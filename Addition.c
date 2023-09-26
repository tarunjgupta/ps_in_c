#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2;
	int a[50][50],b[50][50],c[50][50];
	printf("Enter the no. of rows of first matrix");
	scanf("%d",&r1);
	printf("Enter the no. of columns of first matrix");
	scanf("%d",&c1);
	printf("Enter the no. of rows of second matrix");
	scanf("%d",&r2);
	printf("Enter the no. of columns of second matrix");
	scanf("%d",&c2);
	if(c1==c2&&r1==r2)
	{
		printf("Enter the values of first matrix");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&a[i][j]);
		}
    	}
		printf("Enter the values of second matrix");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&b[i][j]);
		}
    	}
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
    	}
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
		printf("%d ",c[i][j]);
		}
		printf("\n");
     	}
        }

	else
	printf("Addition is not possible");
	return 0;
}
