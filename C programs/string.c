//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char ch;
//	char c[50];
//	printf("Enter the string: ");
//	gets(c);
//	puts(c);
//	fflush(stdin);
//	printf("\nEnter the character: ");
//	ch = getchar();
//	putchar(ch);
//}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[50] = "CSE-A mass@104";
	int n = strlen(s),i;
	int count_special = 0,count_cap = 0,count_small = 0,count_num = 0,count_space = 0;
	for(i = 0;i < n;i++)
	{
		if(isupper(s[i]))
		
		{
			count_cap++;
		}
        else if(islower(s[i]))
		
		{
			count_small++;
		}
		else if(isdigit(s[i]))
		
		{
			count_num++;
		}
		else if(isspace(s[i]))
		
		{
			count_space++;
		}
		else
		
		{
			count_special++;
		}
	}
	printf("Upper case count: %d\n",count_cap);
	printf("Lower case count: %d\n",count_small);
	printf("Space count: %d\n",count_space);
	printf("Special symbol count: %d\n",count_special);
	printf("Digit count: %d\n",count_num);
}
