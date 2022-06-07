// 输入任意两个正整数m和n ，求其最大公约数和最小公倍数。gcd

#include<stdio.h>

int gcd(int x, int y)
{
    if (x % y == 0)
    return y;
    return gcd(y, x % y);
}

int main()
{
    int a, b;
    printf("输出两个正整数");
    scanf("%d%d",&a,&b);
    if (a > 0&&b> 0)
    printf("%d",gcd(a, b));
    else
    printf("Wrong!");
    getch();
    return 0;
}