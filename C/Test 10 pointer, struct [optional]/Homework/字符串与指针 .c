/*
请写出下列程序的运行结果
#include<stdio.h>
int main( )
{   char   string[30]="How_are_you" ;
	char   *p=&string[0],   *p2=string+8;
    printf("%s,%s\n" , p , p2 ) ;
}
*/

#include <stdio.h>

int main()
{
	printf("How_are_you,you");//题意为输出string地址的值后再输出地址头+8后的值
}