#include<stdio.h>

int main()
{
    int a=2, b=5, c=6, d=10;
    int z;
    float x, y;
    x=12; y=365.2114;
    z=(float)a+b;
    a+=b;
    b-=c;
    c*=d;
    d/=a;
    a%=c;
    printf("%f\n",z);
    printf("%d %d %d %d %d\n",a,b,c,d,a);
    getch();
    return 0;
}
