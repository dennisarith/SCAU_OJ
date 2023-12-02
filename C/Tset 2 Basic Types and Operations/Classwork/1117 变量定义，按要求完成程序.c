/*
下面给出一个程序，但是缺少部分语句，请按右边的提示补充完整缺少的语句。

#include "stdio.h"
int main()
{
    _______________________ 
_______________________ 
a = 5;
b = 6;
i = 3.14; j = i * a * b;
printf("a=%d,b=%d,i=%.2f,j=%.2f\n", a, b, i, j);
}
*/

#include "stdio.h"
int main()
{
	int a, b;
	float i, j;
	a = 5;
	b = 6;
	i = 3.14;
	j = i * a * b;
	printf("a=%d,b=%d,i=%.2f,j=%.2f\n", a, b, i, j);
}