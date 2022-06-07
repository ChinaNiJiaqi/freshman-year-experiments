// 判断从键盘上输入的一个整数是否是素数(大于1的整数)

#include<stdio.h>
#include<math.h>

int main()
{
    int prime_number, i, flag=0;
    printf("这是一个素数判断器\n");
    printf("请输入一个大于1整数:");
    scanf("%d",&prime_number);

    if (prime_number > 1)
    {
        for (i=2;i < (int)sqrt(prime_number);i++)
        {
            if (prime_number % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    else 
    {
        printf("请输入正确的数!");
    }

    if (flag ==0)
    {
        printf("%d是素数!",prime_number);
    }
    else
    {
        printf("%d不是素数!",prime_number);
    }
    getch();
    return 0;
}