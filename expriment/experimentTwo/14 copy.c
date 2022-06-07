//————————————————————
//牛顿迭代法求方程的根
#include <stdio.h>
#include <math.h>
float f(float x0)
{
    int tmp;
    if (fabs(x0- tmp) < 1e-6)
    return x0;
    x0 = x0 - (((2 * x0 - 4) * x0 + 3) * x0 - 6)/((6 * x0 - 8) * x0 + 3);
    tmp = x0;
    return x0;
}


int main() {
    float x0 = 1.5;

    printf("%6.2lf",x0);
    getch();
}
