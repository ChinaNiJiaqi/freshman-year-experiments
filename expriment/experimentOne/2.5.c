//��̽��û������Сд��ĸת���ɴ�д��ĸ�����ҽ���д�ַ��ʹ�д�ַ�����Ӧ��ASCII�������
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void safe_flush(FILE *fp)//���scanf���������Ļ�������
    {
        int ch;
        while( (ch = fgetc(fp)) != EOF && ch != '\n' );
    }

int main()
{
    int b,flag=0;
    char ch;
    while (flag==0)
    {
        printf("������һ��Сд�ַ�:");
        scanf(" %c",&ch);
        if (ch < 'a'||ch>'z')
        {
            printf("����������!( ȷ�����������Сд��ĸ)\n");
            safe_flush(stdin);
        }
        else
        {
            b=toupper(ch);
            printf("��Ӧ�Ĵ�д�ַ���:%c\n",b);
            printf("��Ӧ�Ĵ�д�ַ�����Ӧ��ASCII����:%d\n",b);
            flag=1;
        }
    }

    system("pause");
    return 0;
}
