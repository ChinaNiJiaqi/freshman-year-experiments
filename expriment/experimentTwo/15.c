// �����Сд��ĸ��ASCII����ձ�Ҫ����ʾ���ַ��Լ��ַ�ASCII�����ʮ���ơ��˽��ơ�ʮ��������ʽ��

#include<stdio.h>

int main()
{
    int asc=0;
    for (asc = 65; asc <= 90; asc++)
    {
        printf("%c  %d  %x  %X\n",asc, asc, asc, asc);
    }
    for (asc = 97; asc <= 122; asc++)
    {
        printf("%c  %d  %x  %X\n",asc, asc, asc, asc);
    }
    getch();
    return 0;
}