/*
由键盘输入一个3＊4（3行4列）的数字矩阵，其中任意两个数字均不相同。要求输出该数字矩阵中的鞍点（即在矩阵行中最大，列中最小的数）。
若没有鞍点，输出“NO”字样。
*/

#include <stdio.h>
int main()
{
	int a[3][4],i,j,maxj,max,m,flag;

	for (i=0;i<3;i++)//输入矩阵
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);

	for (i = 0; i < 3; i++)
	{
		max=a[i][0];
		maxj=0;//记录最大值的列号
		for (j = 0; j < 4; j++)//找出第i行的最大值
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
		}

		flag=1;//假设a[i][maxj]是鞍点
		
		for (m = 0; m < 3; m++)//判断a[i][maxj]是否是第m行的最小值
		{
			if (a[m][maxj]<a[i][maxj])
			{
				flag=0;
				break;
			}
		}

		if(flag==1)
		{
			printf("%d",max);
			break;//找到鞍点，结束循环
		}
	}
	if(!flag)
		printf("NO");
}