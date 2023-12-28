/*输入10个学生，每个学生的数据包括学号、姓名、3门课的成绩。定义结构体类型表示学生类型，输入10个学生的数据，
计算每个学生的平均成绩。按平均成绩由高到低输出所有学生信息，成绩相同时按学号从小到大输出。

#include <stdio.h>

struct data
{
_______________________
};

int main()
{
    int i,j;
    struct data stu[10],tmp;
    for(i=0; i<10; i++)
    {
_______________________
    }
    for(i=0; i<9; i++)
        for(j=0; j<9-i; j++)
        {
_______________________
        }
    for(i=0; i<10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}*/

#include <stdio.h>
#include <string.h>

struct data
{
    int num;
    char name[20];
    double score[3];
    double aver;
};

int main()
{
    int i, j;
    struct data stu[10], tmp;
    for (i = 0; i < 10; i++)
    {
        scanf("%d %s %lf %lf %lf", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
        {
            if (stu[j].aver < stu[j + 1].aver)
            {
                tmp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = tmp;
            }
            else if (stu[j].aver == stu[j + 1].aver)
            {
                if (stu[j].num > stu[j + 1].num)
                {
                    tmp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = tmp;
                }
            }
        }
    for (i = 0; i < 10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}