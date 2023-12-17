/*输入格式
一个17位的身份证号（身份证号的前17位）


输出格式
如果输入错误（不是17位），输出字符串“ERROR”；如果输入正确，通过计算补充校验位C后，将完整的身份证号显示出来。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char id[18];
	int i, sum = 0, C;
	scanf("%s", id);
	if (strlen(id) != 17)
	{
		printf("ERROR");
		return 0;
	}
	for (i = 0; i < 17; i++)
	{
		sum += (id[i] - '0') * (1 << (17 - i));
	}
	C = (12 - sum % 11) % 11;
	if (C == 10)
		id[17] = 'X';
	else
		id[17] = C + '0';
	for (i = 0; i < 18; i++)
		printf("%c", id[i]);
	return 0;
}