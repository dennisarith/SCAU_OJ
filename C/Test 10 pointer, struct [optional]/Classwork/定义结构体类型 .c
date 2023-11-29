/*要求定义一个名为student的结构体类型，其包含如下成员：
（1）字符数组name，最多可存放10个字符；
（2）字符变量sex，用于记录性别；
（3）整数类型变量num，用于记录学号；
（4）float类型变量score，用于记录成绩；
并使下列代码完整。

#include "stdio.h"
_______________________
int main()
{
    struct  student stu;
    gets(stu.name);
    scanf("%c",  &stu.sex);
    scanf("%d",  &stu.num);
    scanf("%f",  &stu.score);
    printf("%s\n", stu.name);
    printf("%c\n", stu.sex);
    printf("%d\n", stu.num);
    printf("%f\n", stu.score);
    return 0;
}*/

#include "stdio.h"

struct student
{
    char name[10];
    char sex;
    int num;
    float score;
};
struct student stud1;

int main()
{
    struct  student stu;
    gets(stu.name);
    scanf("%c", &stu.sex);
    scanf("%d", &stu.num);
    scanf("%f", &stu.score);
    printf("%s\n", stu.name);
    printf("%c\n", stu.sex);
    printf("%d\n", stu.num);
    printf("%f\n", stu.score);
    return 0;
}