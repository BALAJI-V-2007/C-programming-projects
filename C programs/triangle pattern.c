//#include<stdio.h>
//int main()
//{
//	int i,rows,j;
//	printf("Enter number of rows: ");
//	scanf("%d",&rows);
//	for (i = 1;i<= rows;i++)
//	{
//	 for (j = 1;j <= rows;j++)
//	 {
//	 	if(i + j <= rows)
//	 	{
//	 		printf(" ");
//		}
//		else
//	 	{
//	 		printf("* ");
//		}
//	 }
//	 printf("\n");
//	}
//	
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i,rows,j,k;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	for (i = 1;i<= rows;i++)
	{
	 for (j = 1;j <= rows - i;j++)
	 {
	   printf(" ");
	 }
	 for(k = 1;k <= i;k++)
	 {
	 	printf("* ");
	 }
	 printf("\n");
	}
	
	return 0;
}

