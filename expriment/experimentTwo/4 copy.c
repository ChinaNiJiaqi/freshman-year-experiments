/* 编程：输入五名学生C语言的百分制成绩，要求输出其成绩等级’A’、’B’、’C’、’D’、’E’。
90～100分为’A’， 80～89分为’B’， 70～79分为’C’，60～69分为’D’， 60分以下为’E’。*/

#include<stdio.h>


int main()
{
    double num[5];
    for(int i = 0;i <5;i++)
    {
        printf("请输入第%d位同学的成绩:",i+1);
        scanf("%lf",&num[i]);

        if (num[i] >= 90&&num[i] <= 100)
        {
            printf("等第: A\n");
        }
        if (num[i] >= 80&&num[i] < 90)
        {
            printf("等第: B\n");
        }
        if (num[i] >= 70&&num[i] < 80)
        {
            printf("等第:C\n");
        }
        if (num[i] >= 60&&num[i] < 70)
        {
            printf("等第:D\n");
        }
        if (num[i] > 0&&num[i] < 60)
        {
            printf("等第: E\n");
        }
        
        
    }
    getch();
    return 0;
}