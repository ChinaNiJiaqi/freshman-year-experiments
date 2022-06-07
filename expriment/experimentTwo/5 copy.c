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

            printf("素数:");
            for (i = start;i <= end;i++)
            {
                flag = 0;
                for (j = 2;j <=(int)sqrt(i);j++)
                {
                    if (i % j == 0)
                    {
                        flag++;
                        break;
                    }
                }
                if (flag==0)
                {
                    printf("%d ",i);
                }
            }
        
    

    getch();
    return 0;
}