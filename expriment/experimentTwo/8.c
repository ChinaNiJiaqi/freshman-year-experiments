// ������еġ�ˮ�ɻ�������ν��ˮ�ɻ�������ָһ��3λ�������λ���������͵��ڸ�������

#include<stdio.h>
#include<math.h>

int main()
{
    int k = 0, num = 100;

    printf("ˮ�ɻ���:");

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