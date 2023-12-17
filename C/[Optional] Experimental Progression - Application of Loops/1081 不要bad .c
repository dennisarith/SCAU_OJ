//由键盘输入一行字符（最多不超过80个字符，以回车结束），要求编程实现删除该行字符中的“bad”(小写)，输出处理后的结果(结果不含bad)。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[81];
	gets(str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'b' && str[i + 1] == 'a' && str[i + 2] == 'd')
		{
			for (int j = i; j < len - 2; j++)
			{
				str[j] = str[j + 3];
			}
			len -= 3;
			i -= 3;
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}