//************LETTER PATTERN PROBLEM**********//
#include<stdio.h>
int main()
{
	int j,i,n = 5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==3 || i==5 || (j==1 && i<3) || (j==5 && i>3))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf("	");
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==3 || i==5 || (j==1 && i<3) || (j==5 && i>3))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf("\n");
	}
	
}
