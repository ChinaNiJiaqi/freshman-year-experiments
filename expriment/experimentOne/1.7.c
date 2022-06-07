#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=1, j=1, k=1, x, y;
    printf("第1次输出:\n%d\t%d\t%d\n",++i,++i,++i);
    printf("第2次输出:\n%d\t%d\t%d\n",j++,j++,j++);
    x=(i-=4)&&(++k);
    printf("第3次输出:\n%d\t%d\t%d\n",i,k,x);
    y=1||(++i)&&(++j);
    printf("第4次输出:\n%d\t%d\t%d\n",i,j,y);
    system("pause");
    return 0;
}