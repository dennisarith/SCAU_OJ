//从1到n，n(2 <= n <= 10)个整数中拿走一个数，你能判断出中拿走了哪个数吗？

#include <stdio.h>

int main()
{
	int n, i, sum = 0, sum1 ;
	scanf("%d", &n);
	int a[9];
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	for (i = 1; i <= n; i++)
	{
		sum1 += i;
	}
	printf("%d", sum1 - sum);
	return 0;
}