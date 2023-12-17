/*有N张（N不超过1000）纸片，每张纸片上有一个数字从1至N，最初N张纸片按由大到小顺序叠放（编号最大的在最下面），现在不断重复执行如下操作：
（1）将最上面的一张放到最下面；
（2）再将最上面的一张放到最下面；
（3）将当前最上面的一张拿走；
重复上面操作（1）（2）（3）（1）（2）（3）（1）......
直到剩下最后一张纸片，输出该纸片上的编号*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, temp;
	scanf("%d", &n);
	int i, j = n, k;
	int a[n];
	for (i = 0; i < n; i++)//整理牌
	{
		a[i] = j;
		j--;
	}
	for (i = n - 1; i >= 1; i--)//第n-1次取牌
	{
		for (k = i; k >= 1; k--)//第一步
		{
			temp = a[k];
			a[k] = a[k - 1];
			a[k - 1] = temp;
		}
		for (k = i; k >= 1; k--)//第二步
		{
			temp = a[k];
			a[k] = a[k - 1];
			a[k - 1] = temp;
		}
		a[i] = '\0';//拿走最上面一张
	}
	printf("%d", a[0]);//输出最后一张
	return 0;
}