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

        if (num[i] >= 90&&num[i] <= 100)
        {
            printf("�ȵ�: A\n");
        }
        if (num[i] >= 80&&num[i] < 90)
        {
            printf("�ȵ�: B\n");
        }
        if (num[i] >= 70&&num[i] < 80)
        {
            printf("�ȵ�:C\n");
        }
        if (num[i] >= 60&&num[i] < 70)
        {
            printf("�ȵ�:D\n");
        }
        if (num[i] > 0&&num[i] < 60)
        {
            printf("�ȵ�: E\n");
        }
        
        
    }
    getch();
    return 0;
}