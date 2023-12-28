//由键盘输入10个整数，编程判断是否存在两个数的和为1909，存在输出Y，不存在输出N

#include <stdio.h>

int main()
{
	int a[10],result;
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			int b = a[j] + a[i];
			if (b == 1909)
				result = b;
		}
	}
	if (result == 1909)
		printf("Y");
	else
		printf("N");
}