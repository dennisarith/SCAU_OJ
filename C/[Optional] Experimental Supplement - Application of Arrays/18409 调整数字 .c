/*给你N个整数构成的数列，要求将数列中的所有负数调整到数列前面，将正数调整到数列后面
（保持负数之间先后顺序，且保持正数之间的先后顺序）
例如：原来是1，0，5，-2，0，-3，3.经过f处理后变成-2，-3，0，0，1，5，3*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, a[80], b[80], c[80], d[80], i, j = 0, k = 0, l = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 0;
		c[i] = 0;
		d[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[j] = a[i];
			j++;
		}
		else if (a[i] > 0)
		{
			c[k] = a[i];
			k++;
		}
		else
		{
			d[l] = a[i];
			l++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", b[i]);
	}
	for (i = 0; i < l; i++)
	{
		printf("%d ", d[i]);
	}
	for (i = 0; i < k; i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}