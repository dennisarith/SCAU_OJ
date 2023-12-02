/*
由键盘输入任意个字符（以连着的三个小写字符bye做为结束标志），将所有字符（包括bye），写入新建的文件answer.txt中（注：文件放在当前目录）。 请完成该功能，（注意，填空题，请不要使用return 0结束，否则会影响评判而判错）
（如键盘输入内容如下）
He, can you write the code?
Yes, you can.bye
No, you can't.
（程序执行后，在文件answer.txt中内容如下）
He, can you write the code?
Yes, you can.bye

（注：因No, you can't.在bye之后，所以不输出）
（注：代码中不要使用return及exit()函数，以免误判）

#include "stdio.h"

main()
{
_______________________
}
*/

#include "stdio.h"

int main()
{
	FILE *fp;//定义文件指针
	char ch, ch1 = ' ', ch2 = ' ', ch3 = ' ';
	if ((fp = fopen("answer.txt", "w")) == NULL)//判断文件是否打开成功
	{
		return 1;
	}
	while ((ch = getchar()) != EOF)//判断是否输入结束
	{
		fputc(ch, fp);//将字符写入文件
		ch1 = ch2; ch2 = ch3; ch3 = ch;//将输入的字符赋值给ch1，ch2，ch3
		if (ch1 == 'b' && ch2 == 'y' && ch3 == 'e')//判断是否输入bye
			break;//跳出循环
	}
	fclose(fp);//关闭文件
}