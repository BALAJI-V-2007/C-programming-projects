//**********PRIME NUMBER SERIES PROBLEM**********//
#include<stdio.h>
int main()
{
	int n,count = 0,i = 1,j = 1;
	printf("Enter number of primes you want: ");
	scanf("%d",&n);
	for(j = 1; j <= n ; j++)
	{
		count = 0;
		for(i = 1; i <= j; i++)
	    {
		    if(j % i == 0)
		    {
		    	count++;
		    }
	    }
	    if(count == 2)
     	{
     		printf("%d ",j);
		}
    }
	return 0;
}
