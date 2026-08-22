#include<stdio.h>
#include<stdlib.h>
void add()
{
	int a,b ;scanf("%d %d",&a,&b);
	
	printf("Addition: %d\n",a+b);
}
int sub(a,b)
{

	
	printf("subtraction: ");
	return a - b;
}
int multi()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Multiplication: ");
	return a * b;
}

int main()
{
	add();
	int r = sub(133,94);
	printf("%d",r);
	int r1 = multi();
	printf("%d",r1);
}
