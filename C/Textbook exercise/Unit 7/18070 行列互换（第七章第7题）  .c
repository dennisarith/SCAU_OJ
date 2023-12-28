/*输入一个4*4矩阵，编写两个函数分别实现对二维数组元素的行与行进行交换，以及列与列进行交换

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;*a=*b;*b=temp;
}

void col(int a[][4], int i, int j)
{
    _______________________
}

void row(int a[][4], int i, int j)
{
    _______________________
}

int main()
{
    int a[4][4];
    int i,j;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            scanf("%d", &a[i][j]);
    col(a,0,2);
    row(a,0,2);
    col(a,1,3);
    row(a,1,3);
    col(a,0,3);
    row(a,0,3);
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
*/

#include <stdio.h>

void swap(int* a, int* b)
{
    int temp;
    temp = *a; *a = *b; *b = temp;
}

void col(int a[][4], int i, int j)
{
    int k;
    for (k = 0; k < 4; k++)
        swap(&a[k][i], &a[k][j]);
}

void row(int a[][4], int i, int j)
{
    int k;
    for (k = 0; k < 4; k++)
        swap(&a[i][k], &a[j][k]);
}

int main()
{
    int a[4][4];
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    col(a, 0, 2);
    row(a, 0, 2);
    col(a, 1, 3);
    row(a, 1, 3);
    col(a, 0, 3);
    row(a, 0, 3);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}