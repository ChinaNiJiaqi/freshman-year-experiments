// ͨ��������������5����������������е����ֵ��
#include<stdio.h>

int main()
{
    int i, j, max, n = 5;
    int num[n];
    for (i = 0;i < n;i++)
    {
        printf("����������һ������:");
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