//��̼�������һ�������Ρ������Ρ�Բ�������ε��ܳ��������(����8�7��ֵ������ų�������ʾ)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PAI 3.14

int main()
{
    int type,flag=0;
    float a, b, c, p, length, area;
    printf("��������Ҫ�����ͼ������");
    printf("0.������ 1.������ 2.Բ 3.������:");
    scanf("%d",&type);
    switch(type)//�����Ϊ�������������ͼ��
    {
        case 0:
            printf("��������һ���߳�:");
            scanf("%f",&a);
            length=a*4;
            area=a*a;
            printf("length:%f\n",length);
            printf("area:%f\n",area);
            break;
        case 1:
            printf("��������������ƽ�бߵı߳�:");
            scanf("%f%f",&a,&b);
            length=a+b;
            area=a*b;
            printf("length:%f\n",length);
            printf("area:%f\n",area);
            break;
        case 2:
            printf("����뾶����:");
            scanf("%f",&a);
            length=2*PAI*a;
            area=PAI*a*a;
            printf("length:%f\n",length);
            printf("area:%f\n",area);
            break;
        default:
            printf("wrong!");    }
    if(type=3)//���������������ʱ�����Ƿ����
    {
          while(flag==0)
           {
            printf("���������߳�:");
            scanf("%f%f%f",&a,&b,&c);
            if(a+b<=c||a+c<=b||b+c<=a)
            {
                printf("��������ݲ�����������,����������!");
                flag=0;
            }
            else
            {
                length=a+b+c;
                p=length/2;
                area=sqrt(p*(p-a)*(p-b)*(p-c));
                printf("length:%f\n",length);
                printf("area:%f\n",area);
                flag=1;

                }
            }
    }
    system("pause");
    return 0;
}
