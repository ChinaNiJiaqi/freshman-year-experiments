/* ��̣���������ѧ��C���Եİٷ��Ƴɼ���Ҫ�������ɼ��ȼ���A������B������C������D������E����
90��100��Ϊ��A���� 80��89��Ϊ��B���� 70��79��Ϊ��C����60��69��Ϊ��D���� 60������Ϊ��E����*/

#include<stdio.h>


int main()
{
    double num[5];
    for(int i = 0;i <5;i++)
    {
        printf("�������%dλͬѧ�ĳɼ�:",i+1);
        scanf("%lf",&num[i]);

        if (num[i] > 100)
        {
            printf("Wrong!\n");
        }
        else if (num[i] >= 90)
        {
            printf("�ȵ�: A\n");
        }
        else if (num[i] >= 80)
        {
            printf("�ȵ�: B\n");
        }
        else if (num[i] >= 70)
        {
            printf("�ȵ�:C\n");
        }
        else if (num[i] >= 60)
        {
            printf("�ȵ�:D\n");
        }
        else if (num[i] > 0)
        {
            printf("�ȵ�: E\n");
        }
        else
        {
            printf("Wrong!\n");
            i--;
        }
        
    }
    getch();
    return 0;
}