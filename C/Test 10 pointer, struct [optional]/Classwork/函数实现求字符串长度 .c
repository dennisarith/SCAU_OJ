/*
下面程序实现由函数实现求字符串长度，再填空完成

#include "stdio.h"

_______________________

int main()
{
	char s[80];
	int i;
	scanf("%s", s);
	i = f(s);
	printf("%d", i);
}
*/

#include "stdio.h"

int f(char ch[100])
{
    int i;
    for (i = 0; ch[i]; i++);//判断字符串ch[i]是否存在
    return i;
}

int main()
{
	char s[80];
	int i;
	scanf("%s", s);
	i = f(s);
	printf("%d", i);
}