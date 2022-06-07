// 输入任意两个正整数m和n ，求其最大公约数和最小公倍数。

#include<stdio.h>

int china(int a, int b)
{
    if(a >b)
    {
        a = a - b;
    }
    else if(b >a)
    {
        b = b - a;
    }
    else
    {
    return a;
    }
    return china(a, b);
}


int main()
{
    int a, b;
    printf("输出两个正整数");
    scanf("%d%d",&a,&b);
    printf("%d",china(a, b));
    getch();
    return 0;
}