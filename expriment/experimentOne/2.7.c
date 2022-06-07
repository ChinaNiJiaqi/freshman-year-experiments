//编程输出一个由某种字符组成的等腰三角形图形。(*字符可由用户输入)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int r;
    printf("请输入人等腰三角形的层数:");
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
