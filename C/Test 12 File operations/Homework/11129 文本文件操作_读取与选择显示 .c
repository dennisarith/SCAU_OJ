/*
在当前目录中存在文件名为"case1.in"的文本文件，现要求打开该文件，读出里面的所有字符，只将其中的数字字符按先后顺序显示在屏幕上。

（如case1.in内容如下）
13 cats and 22 bikes
（在屏幕上输出结果如下）
1322

#include "stdio.h"

main()
{
    FILE *fp;
    char ch;

    if((_______________________)==NULL)
        return 0;
    while(_______________________)
    {
        _______________________
    }
    fclose(fp);
}
*/

#include "stdio.h"

main()
{
    FILE* fp;
    char ch;

    if ((fp=fopen("case1.in","r")) == NULL)//打开文件
        return 0;
    while ((ch=fgetc(fp))!=EOF)//读取文件
    {
        if (ch>='0' && ch<='9')//判断是否为数字
		{
			putchar(ch);//输出
		}
    }
    fclose(fp);//关闭文件
}