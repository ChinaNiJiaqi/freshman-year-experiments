// 输出整数[a,b]之间的所有素数，a,b的具体值由用户通过键盘指定

#include<stdio.h>
#include<math.h>

int main()
{
    int start, end, i, j,flag;
    printf("这是一个素数判断器,可以输出[a,b]的所有素数\n");
    printf("请输入a:");
    scanf("%d",&start);
    printf("请输入b:");
    scanf("%d",&end);

    if (start > end&&start<2)//保证用户输入的第一个值小于第二个值
    {
        printf("Wrong!");
    }
    else
    {
        if (start==end&&start==2)//如果第一个数和第二个数都是二的话可以直接出结果
        {
            printf("素数:%d",start);
        }
        else
        {
            printf("素数:");
            for (i = start;i <= end;i++)
            {
                flag = 0;
                for (j = 2; j <= (int)sqrt(i); j++)
                {
                    if (i % j == 0)
                    {
                        flag++;
                        break;
                    }
                }
                if (flag == 0)
                {
                    printf("%d ",i);
                }
            }
        }
    }

    getch();
    return 0;
}
