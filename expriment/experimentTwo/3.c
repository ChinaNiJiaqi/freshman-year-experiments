// �Ӽ���������һ��  ������  n����n!
#include<stdio.h>

int f(int n)
{
    if (n ==1)return 1;
    return n * f(n-1);
}


int main()
{
    int i, n;
    printf("������һ��������:");
    scanf("%d",&n);
    if (n<=0)
    printf("Wrong!");
    else
    printf("n!=%d",f(n));
    getch();
    return 0;
}
