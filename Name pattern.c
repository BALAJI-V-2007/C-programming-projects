//************NAME PATTERN PROBLEM**********//
#include<stdio.h>
int main()
{
	int j,i,n = 7;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1 || ((i==1 || i==7) && j <= 4) || (j==5 && (i==2 || i==3 || i==5 || i==6)) || (i==4 && j<=4))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf("");
		for(j=1;j<=n;j++)
		{
			if(((j==1 || j==7) && i==7) || (j==4 && i==1) || ((j==2 || j==6 || j==4) && i==5) || ((j==3 || j==5) && i==3))
			{
				printf("* ");
			}
			else
			{
				printf("  "); 
			} 
		}
		printf("	 ");
		for(j=1;j<=n;j++)
		{
			if(j == 1 || (i == 7 && j <= 5))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf(" ");
		for(j=1;j<=n;j++)
		{
			if(((j==1 || j==7) && i==7) || (j==4 && i==1) || ((j==2 || j==6 || j==4) && i==5) || ((j==3 || j==5) && i==3))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf("	   ");
		for(j=1;j<=n;j++)
		{
			if((j==4 && i<=6) || (i==1 && (j>=2 || j<=6)) || ( i==7 && (j==3 || j==2)) || (i==6 && j==1))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf("    ");
		for(j=1;j<=n;j++)
		{
			if((j==4 && i<=7) || ((j>=2 || j<=6) && (i==1 || i==7)))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			} 
		}
		printf("	");
		printf("\n"); 
	}
	
}

