// 用牛顿迭代法求方程2x3-4x2+3x-6=0在1.5附近的根

#include<stdio.h>
#include<math.h>

int main()
{
    double x1, x0, f, f1;
    x0 = 1.5;
    do
    {
        x0 = x1;
        f = ((2 * x0 - 4) * x0 + 3) * x0 - 6;
        f1 = (6 * x0 - 8) * x0 + 3;
        x1 = x0 - f / f1;
    }while (fabs(x1 - x0) > 1e-6);
    printf("%6.2lf",x1);
    getch();
    return 0;
}
