// ��һ����������:���������е�ǰ20��֮��

#include<stdio.h>

int factorial(int n)
{
    if (n < 3)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) + factorial(n - 2);
    }
}

int main()
{
    int num;
    double sum = 0.0;

    for (num = 1; num <= 20; num++)
    {
        sum = sum + (double)factorial(num + 2)/(double)factorial(num + 1);
        
    }
    printf("��Ϊ:%lf",sum);
    getch();
    return 0;
}