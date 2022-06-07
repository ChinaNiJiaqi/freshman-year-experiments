//编程模拟一个简单的工资计算器，计算一个销售人员的月工资的数量（月工资=基本工资+提成，提成=商品数*1.5）。（基本工资设为一个固定值，商品数通过键盘输入。）
#include<stdio.h>
#include<stdlib.h>
#define BASIC 1000.00

int main()
{
    float quantity, money;
    int a=BASIC;
    printf("今天为老板打工了吗?\n你的基本工资只有:%d\n",a);
    printf("输入你这个月为老板卖的货的数量:");
    scanf("%f",&quantity);
    money=BASIC+(quantity*1.5);
    printf("You get:%f\n",money);
    system("pause");
    return 0;

}