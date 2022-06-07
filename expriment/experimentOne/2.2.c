//编程输入任意五个数值并求解五个数的平均值。
#include<stdio.h>

int main()
{
    float a, b, c, d, e, ave;
    printf("请任意输入五个数:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    ave=(a+b+c+d+e)/5;
    printf("Average:%f",ave);
    getch();
    return 0;
}
