// ������������������m��n ���������Լ������С��������gcd

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
    printf("�������������");
    scanf("%d%d",&a,&b);
    if (a > 0&&b> 0)
    printf("%d",gcd(a, b));
    else
    printf("Wrong!");
    getch();
    return 0;
}