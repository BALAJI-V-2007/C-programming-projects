//**********FACTORIAL PROBLEM************//
#include<stdio.h>
int main()
{
	int n,a = 1,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		a = i*a;
	}
	printf("%d",a);
	return 0;
}
