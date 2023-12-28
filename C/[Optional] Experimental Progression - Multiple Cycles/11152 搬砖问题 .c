/*一个大男人一次可以搬3块砖，一个大女人一次可以搬2块砖，两个小孩一次可以搬1块砖，现由键盘输入总人数n以及总砖数m，问有多少种不同的分配方案，
正好n个人一次搬完所有的m块砖(无闲人且每人满负荷)，没有这样的方案则输出no*/

#include <stdio.h>

int main()
{
	int n, m, i, j, k, count = 0;
	scanf("%d %d", &n, &m);
	for (i = 0; i <= m / 3; i++)
	{
		for (j = 0; j <= m / 2; j++)
		{
			for (k = 0; k <= 2 * m; k++)
			{
				if (i * 3 + j * 2 + 0.5 * k == m && i + j + k == n)
				{
					count++;
				}
			}
		}
	}
	if (count == 0)
		printf("no");
	else
		printf("%d", count);
	return 0;
}