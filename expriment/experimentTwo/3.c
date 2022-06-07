// 从键盘中输入一个  正整数  n，求n!
#include<stdio.h>

int f(int n)
{
    if (n ==1)return 1;
    return n * f(n-1);
}


int main()
{
    int i, n;
    printf("请输入一个正整数:");
    scanf("%d",&n);
    if (n<=0)
    printf("Wrong!");
    else
    printf("n!=%d",f(n));
    getch();
    return 0;
}
