// ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include<stdio.h>
#include <string.h>

int main()
{
    typedef  int CHAR;
    char a[100], temp;
    int i = 0, j;
    CHAR cha = 0, chA = 0, ch1 = 0, ch11 = 0, chk = 0;

    printf("�뿪ʼ��������!\n");

    while((temp = getchar()) != '\n')  //�ж��ַ����������
    {
    
        if (temp >= 'A'&&temp <= 'Z')
        {
            chA++;
        }
        else if (temp >= 'a'&&temp <= 'z')
        {
            cha++;
        }
        else if (temp >= '1'&&temp <= '9')
        {
            ch1++;
        }
        else if (temp == 32)
        {
            chk++;
        }
        else
        {
            ch11++;
        }
    }
    printf("\n");
    printf("��д��ĸ:%d\nСд��ĸ:%d\nnum:%d\n�ո�:%d\n����:%d\n",chA, cha, ch1, chk, ch11);
    getch();
    return 0;
}