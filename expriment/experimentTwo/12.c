// �Ӽ���������N��ѧ����C���Գɼ���Ҫ��ͳ����N��ѧ����ƽ���ɼ�����߷��Լ���������������Nֵ�Ĵ�С�����趨��������5��10֮�䡣��

#include<stdio.h>
#define N 5
int main()
{
    
    int i =0, fail = 0;
    double score[5];
    double ave, max;

    printf("������λͬѧ�ĳɼ�");
    scanf("%lf%lf%lf%lf%lf",&score[0], &score[1], &score[2], &score[3], &score[4]);
    max = 0;
    ave = (score[0] + score[1] + score[2] + score[3] + score[4]) / 5;
    for (i = 0; i < 5; i++)
    {
        if(max < score[i])
        {
            max = score[i];
        }
        if(60 > score[i])
        {
            fail++;
        }
    }
    printf("ƽ���ɼ�:%g\n",ave);
    printf("��߷�:%g\n",max);
    printf("����������:%d",fail);
    getch();
    return 0;
}