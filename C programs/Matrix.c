//**********MATRIX SUM PROBLEM**********//
#include <stdio.h>
int main()
{
	int i,j,r,c;
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
	printf("----------------------------------------------------------------------\n");
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
	printf("----------------------------------------------------------------------\n");
	printf("!!THE SUM OF MATRIX a AND b is:\n ");
	for(i = 1;i <= r; i++)
	{
		for(j = 1;j <= c;j++)
		{
			printf("%d		",a[i][j] + b[i][j]);
		}
	
		printf("\n\n\n");		
	}	
}
