// 输出fibonacci数列的前20项。

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
    int num = 1;
    printf("factorial前20项:");
    for (num = 1; num <= 20; num++)
    {
        printf("%d ",factorial(num));
    }
    getch();
    return 0;
}