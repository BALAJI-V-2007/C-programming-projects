//**********STRONG NUMBER PROBLEM************//
#include<stdio.h>
int main()
{
	int n,a = 1,i,r,sum = 0,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	while(n != 0)
	{
			r = n % 10;
			for(i = 1;i <= r;i++)
	    	{
				a = i*a;
    		}
    		sum += a;
    		a = 1;
    		n /= 10;
	}
	printf("%d",sum);
	if(sum == temp)
	{
		printf("\nIt is a strong number");
	}
	else
	{
		printf("\nIt is not a strong number");
	}
	return 0;
}
