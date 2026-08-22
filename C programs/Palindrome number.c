//**********PALINDROME NUMBER PROBLEM**********//

#include<stdio.h>
int main()
{
	int n = 121,temp,r,rev =0;
	temp = n;
	while(n > 0)
	{
		r = n % 10;
		rev = rev *10 + r;
		n /= 10;
	}
	if(temp == rev)
	{
		printf("%d is a palindrone number and its reverse is also %d",temp,rev);
	}
	else
	{
		printf("%d is not a palindrome number and its reverse is %d",temp,rev);
	}
	return 0;
}
