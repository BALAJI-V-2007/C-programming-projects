//**********PRIME NUMBER SERIES PROBLEM**********//
#include<stdio.h>
int main()
{
	int n,count = 0,i,j;
	printf("Enter number of primes upto you want: ");
	scanf("%d",n);
	for(j = 1; j <= n ; j++)
	{
		for(i = 1; i <= j; i++)
	    {
		    if(n % i == 0)
		    {
		    	count++;
		    }
	    }
	    if(count == 2)
	    {
     		printf("%d ",n);
        }
    }
	return 0;
}
