// �жϴӼ����������һ�������Ƿ�������(����1������)

#include<stdio.h>
 
int main()
{
    int prime_number, i, flag=0;
    printf("����һ�������ж���\n");
    printf("������һ������1����:");
    scanf("%d",&prime_number);

    if (prime_number > 1)
    {
        if (prime_number == 2)
        {
            printf("%d������!",prime_number);
        }
        else
        {
            for (i=2;i < prime_number;i++)
            {
                if (prime_number % i == 0)
                {
                    flag++;
                    break;
                }
            }
        }
    }
    else 
    {
        printf("��������ȷ����!");
    }

    if (flag ==0)
    {
        printf("%d������!",prime_number);
    }
    else
    {
        printf("%d��������!",prime_number);
    }
    getch();
    return 0;
}