//读入一行字符串（不多于80个字符，以回车结束），判断该字符串是否为回文串（即从左向右拼写与从右向左拼写是一样的），是则输出Y，不是则输出N。
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k = 1;
	char ch[80];
	gets(ch);
	for (i = 0, j = strlen(ch) - 1; i < strlen(ch) / 2; i++, j--)
	{
		if (ch[i] != ch[j])
		{
			k = 0;
			break;
		}
	}
	if (k == 1)
		printf("Y");
	else
		printf("N");
	return 0;
}