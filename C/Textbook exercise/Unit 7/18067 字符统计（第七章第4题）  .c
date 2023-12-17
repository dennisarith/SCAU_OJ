/*编写一个函数，统计一个字符串中字母、数字和空格的个数。使用全局变量存放字母和数字个数，函数返回值是空格个数

#include <stdio.h>
#include <string.h>
#include <math.h>

int nL=0, nN=0;

int statistics(char *s)
{
    _______________________
}

int main()
{
    char s[81];
    int nS;
    gets(s);
    nS = statistics(s);

    printf("%d %d %d\n", nL, nN, nS);
    return 0;
}
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int nL = 0, nN = 0;

int statistic(char* s)
{
	int ret = 0;
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
			nN++;
		else if (*s >= 'a' && *s <= 'z' || *s >= 'A' && *s <= 'Z')
			nL++;
		else if (*s == ' ')
			ret++;
		s++;
	}
	return ret;
}

int main()
{
	char s[81];
	int nS;
	gets(s);
	nS = stastics(s);
	printf("%d %d %d\n", nL, nN, nS);
	return 0;
}