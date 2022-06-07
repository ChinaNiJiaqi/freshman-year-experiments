// 从键盘上输入N个学生的C语言成绩，要求统计这N个学生的平均成绩、最高分以及不及格人数。（N值的大小自行设定，建议在5到10之间。）

#include<stdio.h>
#define N 5
int main()
{
    
    int i =0, fail = 0;
    double score[5];
    double ave, max;

    printf("输入五位同学的成绩");
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
    printf("平均成绩:%g\n",ave);
    printf("最高分:%g\n",max);
    printf("不及格人数:%d",fail);
    getch();
    return 0;
}