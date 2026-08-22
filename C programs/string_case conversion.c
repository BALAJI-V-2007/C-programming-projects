#include<stdio.h>
#include<string.h>
int main()
{
	char s[40];
	scanf("%s",&s);
	int i,l;
	l = strlen(s);
	char c[l];
	for(i = 0; i<l;i++)
	{
		if(isupper(s[i]))
		{
			s[i] += 32;
		}
		else
		{
			s[i] -= 32;
		}
	}
	printf("%s",s);
}


