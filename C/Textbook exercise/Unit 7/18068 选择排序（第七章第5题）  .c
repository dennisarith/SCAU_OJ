/*输入10个整数，编写一个实现对数组进行选择排序的函数

#include <stdio.h>

int sort(int a[], int n)
{
    int i,j,k,tmp;
    for(i=0;i<n-1; i++)
    {
        k=i;
        for(_______________________)
            if(_______________________) k=j;
        tmp=a[k];a[k]=a[i];a[i]=tmp;
    }
}

int main()
{
    int a[10];
    int i;
    for(i=0; i<10; i++) scanf("%d", &a[i]);
    sort(a,10);
    for(i=0; i<10; i++) printf("%d\n", a[i]);
    return 0;
}
*/

#include <stdio.h>

int sort(int a[], int n)
{
	int i,j,k,tmp;
	for(i=0;i<n-1; i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[k]) k=j;
		tmp=a[k];a[k]=a[i];a[i]=tmp;
	}
}
