//**********MATRIX PRODUCT PROBLEM***********//
#include <stdio.h>
int main()
{
	int i,j,r,c,k,sum = 0;
	printf("Enter the rows and columns of matrix: ");
	scanf("%d %d",&r,&c);
	int a[r][c],b[r][c],d[r][c];
	printf("!!ENTER THE MATRIX a:\n ");
	for(i = 1;i <= r; i++)
	{
		for(j = 1;j <= c;j++)
		{
			printf("Enter the element(%d,%d): ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("				");
		for(j = 1;j <= c;j++)
		{
			printf("%d		",a[i][j]);
			
		}
		printf("\n");		
	}
	printf("---------------------------------------------------------------------------------\n");
	printf("!!ENTER THE MATRIX b:\n ");
	for(i = 1;i <= r; i++)
	{
		for(j = 1;j <= c;j++)
		{
			printf("Enter the element(%d,%d): ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("				");
		for(j = 1;j <= c;j++)
		{
			printf("%d		",b[i][j]);
			
		}
		printf("\n");		
	}
	printf("---------------------------------------------------------------------------------\n");
	printf("!!THE PRODUCT OF MATRIX a AND b is:\n ");
	for(i = 1;i <= r; i++)
	{
		for(j = 1;j <= c;j++)
		{
			d[i][j] = 0;
			for(k = 1;k <= c;k++)
			{
				d[i][j] += a[i][k] * b[k][j];
			}
			printf("%d		",d[i][j]);
		}
	
		printf("\n\n\n");		
	}	
}
