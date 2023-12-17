/*编写一个函数，计算一个整数的所有数字之和

#include "stdio.h"

int sum(int n)
{
    _______________________
}

main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}*/

#include "stdio.h"

int sum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
}