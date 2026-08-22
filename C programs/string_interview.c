//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char s[50] = {"a2b2c3"},v,res[50] = "";
//	int l = strlen(s),i,num,k = 0,j;
//	for(i = 0;i < l;i++)
//	{
//		if(isalpha(s[i]))
//		{
//			v = s[i];
//		}
//		else
//		{
//			num = s[i] - '0';
//			for(j = 0;j < num;j++)
//			{
//				res[k++] = v;
//			}
//		}
//	}
//	printf("result: %s",res);
//}
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[50] = {"aaasbbbcccccdd"},res[50] = "";
	int l = strlen(s),i,num = 1,k = 0;
	for(i = 0;i < l;i++)
	{
		if(s[i] == s[i + 1])
		{
		    	num ++;
		    	
		}
		else
		{
			res[k++] = s[i];
			res[k++] = (char)num + 48;
			num = 1;
		}
	}
	printf("result: %s",res);
}
