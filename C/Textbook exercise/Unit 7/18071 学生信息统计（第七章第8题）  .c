/*输入10个学生5门课的考试成绩，分别用函数实现以下功能：
(1) 计算一个学生的平均分。
(2) 计算每门课程的平均分。
(3) 找出每门课程的最高分。
显示结果，显示两位小数。

#include <stdio.h>

void average(double a[][5], int n)
{
_______________________
}

void average2(double a[][5], int n)
{
_______________________
}

void top(double a[][5], int n)
{
_______________________
}

int main()
{
    double a[10][5];
    int i, j;
    for(i=0; i<10; i++)
        for(j=0; j<5; j++)
            scanf("%lf", &a[i][j]);
    average(a,10);
    average2(a,10);
    top(a,10);
    return 0;
}
*/

#include <stdio.h>

void average(double a[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        double sum = 0;
        for (int j = 0; j < 5; j++)
            sum += a[i][j];
        printf("%.2f ", sum / 5);
    }
    printf("\n");
}


void average2(double a[][5], int n)
{
    for (int i = 0; i < 5; i++)
    {
        double sum = 0;
        for (int j = 0; j < n; j++)
            sum += a[j][i];
        printf("%.2f ", sum / n);
    }
    printf("\n");
}

void top(double a[][5], int n)
{
    for (int i = 0; i < 5; i++)
    {
        double max = 0;
        for (int j = 0; j < n; j++)
            if (max < a[j][i])
                max = a[j][i];
        printf("%.2f ", max);
    }
    printf("\n");
}

int main()
{
    double a[10][5];
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", &a[i][j]);
    average(a, 10);
    average2(a, 10);
    top(a, 10);
    return 0;
}