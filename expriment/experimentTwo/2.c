// �жϴӼ����������һ�������Ƿ�������(����1������)

#include<stdio.h>
#include<math.h>

int main()
{
    int prime_number, i, flag=0;
    printf("����һ�������ж���\n");
    printf("������һ������1����:");
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