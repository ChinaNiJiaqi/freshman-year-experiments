// 输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。

#include<stdio.h>
#include <string.h>

int main()
{
    typedef  int CHAR;
    char a[100], temp;
    int i = 0, j;
    CHAR cha = 0, chA = 0, ch1 = 0, ch11 = 0, chk = 0;

    printf("请开始你的输入吧!\n");

    while((temp = getchar()) != '\n')  //判断字符串输入完毕
    {
    
        if (temp >= 'A'&&temp <= 'Z')
        {
            chA++;
        }
        else if (temp >= 'a'&&temp <= 'z')
        {
            cha++;
        }
        else if (temp >= '1'&&temp <= '9')
        {
            ch1++;
        }
        else if (temp == 32)
        {
            chk++;
        }
        else
        {
            ch11++;
        }
    }
    printf("\n");
    printf("大写字母:%d\n小写字母:%d\nnum:%d\n空格:%d\n其他:%d\n",chA, cha, ch1, chk, ch11);
    getch();
    return 0;
}