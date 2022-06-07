// 通过键盘输入任意5个整数，并输出其中的最大值。
#include<stdio.h>

int main()
{
    int i, j, max, n = 5;
    int num[n];
    for (i = 0;i < n;i++)
    {
        printf("请输入任意一个整数:");
        scanf("%d",&num[i]);
    }
    max = num[0];
    for (i = 0;i < n-1;i++)
    {
        if (num[i] < num[i+1])
            {
               max = num[i+1];
            }
    }
    printf("%d",max);
    getch();
    return 0;
}