/*编写一个函数，挑选一个字符串中的所有元音字母构成并返回一个新的字符串

#include "stdio.h"

void yuan(char *s,char *s2)
{
_______________________
}

main()
{
    char str[81], str2[81];
    gets(str);
    yuan(str,str2);
    printf("%s", str2);
}
*/

#include <stdio.h>

void yuan(char* s, char* s2)
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
		{
			s2[j] = s[i];
			j++;
		}
	}
	s2[j] = '\0';
}

int main()
{
	char str[81],str2[81];
	gets(str);
	yuan(str, str2);
	printf("%s\n", str2);
}