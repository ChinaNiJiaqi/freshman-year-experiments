#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=100, b=50, c, d;
    int x=5, y=12, e, f, g;

    c=((a>b)?a:b);
    d=((a<b)?a:b*b);
    printf("%d,%d\n",c,d);
    e=x&y;
    f=x|y;
    g=x^y;
    printf("%d,%d,%d\n",e,f,g);
    system("pause");
    return 0;
}