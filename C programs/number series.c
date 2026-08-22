#include<stdio.h>
int main()
{
	int i,rows,j,k;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	for (i = 1;i <= rows;i++)
	{
	 for (j = 1;j <= rows - i;j++)
	 {
	   printf(" ");
	 }
	 for (j = i;j >= 1;j--)
	 {
	   	printf("%d ",j);
	 }
	 for(k = 2;k <= i;k++)
	 {
	 	printf("%d ",k);
	 }
	 printf("\n");
	}
	
	return 0;
}

