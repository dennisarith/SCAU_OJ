//输入两个字符串s1和s2(每个串占一行，以换行回车符结束)，计算两个字符串的所有字符的ASCII码值之和的差。

#include <stdio.h>

int main()
{
	int i=0,j=0;
	char s1,s2;
	while ((s1 = getchar()) != '\n')
		i += s1;
	while((s2=getchar())!= '\n')
		j += s2;
	printf("%d\n",i-j);
	return 0;
}