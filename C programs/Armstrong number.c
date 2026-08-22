//**********ARNSTRONG NUMBER PROBLEM**********//
#include <stdio.h>
int main()
{
	int n = ,temp,r,sum =0;
	temp = n;
	while(n > 0)
	{
		r = n % 10;
		sum += r*r*r;
		n /= 10;
	}
	if(temp == sum)
	{
		printf("%d is a armstrong number and its sum is also %d",temp,sum);
	}
	else
	{
		printf("%d is not a armstrong number and its sum is %d",temp,sum);
	}

	return 0;
}
