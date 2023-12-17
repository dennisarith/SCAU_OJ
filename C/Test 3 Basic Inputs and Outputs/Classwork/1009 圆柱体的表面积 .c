//输入底面半径r和高h，输出圆柱体的表面积，保留3位小数.(圆周率取3.14159)
#include <stdio.h>

int main()
{
	float a = 3.14159, b, c;
	scanf("%f %f", &b, &c);
	printf("%.3f", 2 * a * b * b + 2 * a * b * c);
	return 0;
}