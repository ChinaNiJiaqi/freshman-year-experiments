// ���2000�굽2020����������ꡣ ��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ����

#include<stdio.h>

int main()
{
    int year = 2000;
    printf("������:");
    for (year = 2000; year <= 2020; year++)
    {
        if (year % 4 == 0&&year % 100 != 0)
        {
            printf("%d\t",year);
        }
    }
    getch();
    return 0;
}