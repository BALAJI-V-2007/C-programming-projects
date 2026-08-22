#include<stdio.h>
int main()
{
	int i, n = 5, sum =0, v;
	for(i = 1;i <= n; i++)
	{
		printf("Enter the value: ");
		scanf("%d",&v);
		if(v < 0)
		{
			continue;
		}
		sum += v;
	}
	printf("%d",sum);
	return 0;
}
