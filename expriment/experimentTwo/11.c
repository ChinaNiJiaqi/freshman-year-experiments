// 输出2000年到2020年的所有闰年。 普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年

#include<stdio.h>

int main()
{
    int year = 2000;
    printf("闰年有:");
    for (year = 2000; year <= 2020; year++)
    {
        if (year % 4 == 0&&year % 100 != 0)
        {
            printf("%d\t",year);
        }
    }
    getch();
    return 0;
}