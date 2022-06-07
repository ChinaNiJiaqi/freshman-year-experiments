// 输出所有的“水仙花”。所谓“水仙花数”是指一个3位数，其各位数字立方和等于该数本身

#include<stdio.h>
#include<math.h>

int main()
{
    int k = 0, num = 100;

    printf("水仙花数:");

    for (num = 100; num < 1000; num++)
    {
        k = pow(num/100,3) + pow(((num/10)-(num/100)*10),3) + pow(num%10,3);
        if (num == k)
        {
            
            printf("%d ",num);
        }
    }

    getch();
    return 0;
}