#include<stdio.h>
int main()
{
	int a[50][50],i,j,r,c,temp1;
	printf("Enter the rows");
	scanf("%d",&r);
	printf("Enter the columns");
	scanf("%d",&c);
	printf("Enter the value of matrix");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
}
}
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%2d",a[i][j]);
    }
    printf("\n");
    }
    printf("The transpose of the matrix is:-\n");
    for(i=0;i<r;i++)
    {
    	for(j=i;j<c;j++)
    	{
    		temp1=a[i][j];
    		a[i][j]=a[j][i];
    		a[j][i]=temp1;
		}
	}
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
