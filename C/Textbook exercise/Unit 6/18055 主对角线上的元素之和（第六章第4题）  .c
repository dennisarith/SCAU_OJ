/*输入一个3行4列的整数矩阵，计算并输出主对角线上的元素之和

输入格式
3行4列整数矩阵

输出格式
主对角线上的元素之和

输入样例
1 2 3 4
5 6 7 8
9 10 11 12

输出样例
18

提示
1，6和11
*/

#include <stdio.h>

int main()
{
	int a[3][4];
	int i, j, sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += a[i][i];
	}
	printf("%d", sum);
	return 0;
}