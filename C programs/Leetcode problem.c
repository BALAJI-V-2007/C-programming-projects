#include<stdio.h>
#include<string.h>
int main()
{
	int x = 121;
    char rev[50] = "",ch[50] = "";
    int i = 0,j,r,t;
    if(x < 0)
    {
        ch[i++] = '-';
    }
    while(x != 0)
    {
        r = x % 10;
        ch[i++] = r + 48;
        x /= 10;
    }
    printf("%s",ch);
    int l = strlen(ch);
    t = l;
    for(j = 0;j < l;j++)
    {
        rev[j] = ch[--t];
    }
    printf("\n%s",rev);
    if(rev == ch)
    {
        printf("%s",rev);
    }
    else
    {
        printf("%s",rev);
    }
    return 0;
}
