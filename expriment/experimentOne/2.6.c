//���ģ��һ���򵥵Ĺ��ʼ�����������һ��������Ա���¹��ʵ��������¹���=��������+��ɣ����=��Ʒ��*1.5����������������Ϊһ���̶�ֵ����Ʒ��ͨ���������롣��
#include<stdio.h>
#include<stdlib.h>
#define BASIC 1000.00

int main()
{
    float quantity, money;
    int a=BASIC;
    printf("����Ϊ�ϰ������?\n��Ļ�������ֻ��:%d\n",a);
    printf("�����������Ϊ�ϰ����Ļ�������:");
    scanf("%f",&quantity);
    money=BASIC+(quantity*1.5);
    printf("You get:%f\n",money);
    system("pause");
    return 0;

}