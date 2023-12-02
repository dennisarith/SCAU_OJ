//下面程序实现由键盘输入两个整数a和b，判断并输出a与b中较大值。请在计算机上执行并验证该程序的正确性，之后提交到在线评判系统。

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
    if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	return 0;
}