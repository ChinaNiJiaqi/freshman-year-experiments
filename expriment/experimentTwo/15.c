// 输出大小写字母的ASCII码对照表。要求显示出字符以及字符ASCII编码的十进制、八进制、十六进制形式。

#include<stdio.h>

int main()
{
    int asc=0;
    for (asc = 65; asc <= 90; asc++)
    {
        printf("%c  %d  %x  %X\n",asc, asc, asc, asc);
    }
    for (asc = 97; asc <= 122; asc++)
    {
        printf("%c  %d  %x  %X\n",asc, asc, asc, asc);
    }
    getch();
    return 0;
}