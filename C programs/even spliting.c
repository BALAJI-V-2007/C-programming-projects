//#include<stdio.h>
//int main()
//{
//	int jar = 10, a =0, b=0, c=0,i  ;
//	for( i = 1; i <= jar; i++)
//	{
//		if(i % 3 == 1)
//		{
//			a++;
//		}
//		else if(i % 3 == 2)
//		{
//			b++;
//		}
//		else
//		{
//			c++;
//		}
//	}
//	printf("a has %d choclates\n",a);
//	printf("b has %d choclates\n",b);
//	printf("c has %d choclates\n",c);
//	return 0;
//}
//**********SPLITTING CHOCLATES USING ARRAY IN THREE JARS**********//
#include<stdio.h>
int main()
{
	int jar[3] = {10,20,30};int a =0, b=0, c=0,i,j;
	int n  = sizeof(jar) / sizeof(int);
	for(j = 0;j < n;j++)
	{
		for( i = 1; i <= jar[j]; i++)
		{
			if(i % 3 == 1)
			{
				a++;
			}
			else if(i % 3 == 2)
			{
				b++;
			}
			else
			{
				c++;
			}
		}
	}

	
	printf("Abeshik has %d choclates\n",a);
	printf("Balaji has %d choclates\n",b);
	printf("Chandru has %d choclates\n",c);
	a = a + b;
	b = a - b;
	a = a -b;
	printf("swapping Abeshick and Balaji choclates Abeshik gets %d and Balaji gets %d choclates",a,b);
	return 0;
}
