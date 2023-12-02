/*
输入10个整数，计算它们的平均值，并统计有多少个数比平均值大。
*/

#include <stdio.h>

int main()
{
	int a[10], i, count=0,sum=0;
	float average;

	for (i=0; i < 10; i++)//输入10个整数
		scanf("%d", &a[i]);

	for (i = 0; i < 10; i++)
	{
		sum += a[i];
	}

	average = sum / 10.0;//计算平均值

	for (i = 0; i < 10; i++)//统计有多少个数比平均值大
	{
		if (a[i] > average)
			count++;
	}

	printf("%d",count);
	return 0;
}