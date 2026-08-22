#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b:");
	scanf("%d\t%d",&a,&b);
	if(a>b)
	{
	printf("%d",a);
	}
	if(b>a)
	{
	printf("%d",b);
	}
	return 0;
}
