#include<stdio.h>
int main()
{
	int sum = 0, i;
	for(i = 0 ;i <= 10;i++)
	{
		sum = sum + i;
		if(i == 5)
		 goto label;
	}
	label:
		printf("sum = %d ",sum);
	return 0;
}
