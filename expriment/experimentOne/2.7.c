//������һ����ĳ���ַ���ɵĵ���������ͼ�Ρ�(*�ַ������û�����)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int r;
    printf("�������˵��������εĲ���:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    system("pause");
    return 0;
}
