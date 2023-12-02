/*
已经有一个按升序排列的数组，编写程序输入一个整数x，把x插入到数组中，使数组仍然保持升序。
数组如下：
2 3 5 7 11 13 17 23 29 31 34 71 79 97 103

#include <stdio.h>
int a[16]={2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
void display()
{
    int i;
    for(i=0; i<16; i++) printf("%d ", a[i]);
}
int main()
{
_______________________
    display();
    return 0;
}
*/

#include <stdio.h>

int a[16]={2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};

void display()
{
	int i;
	for(i=0; i<16; i++) printf("%d ", a[i]);
}

int main()
{
	int i,j,x;
	scanf("%d",&x);
	if (x>a[14])
		a[15]=x;//如果x比最大的数还大，直接插入到最后
	else
	{
		for (i=0;i<15;i++)
		{
			if (x<a[i])//找到第一个比x大的数
			{
				for (j=14;j>=i;j--)//从后往前移动
				{
					a[j+1]=a[j];
				}
				a[i]=x;//插入
				break;
			}
		}
	}
	display();//输出
	return 0;
}