// ������������������m��n ���������Լ������С��������

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
    printf("�������������");
    scanf("%d%d",&a,&b);
    printf("%d",china(a, b));
    getch();
    return 0;
}