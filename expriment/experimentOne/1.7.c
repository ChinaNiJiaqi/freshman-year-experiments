#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=1, j=1, k=1, x, y;
    printf("��1�����:\n%d\t%d\t%d\n",++i,++i,++i);
    printf("��2�����:\n%d\t%d\t%d\n",j++,j++,j++);
    x=(i-=4)&&(++k);
    printf("��3�����:\n%d\t%d\t%d\n",i,k,x);
    y=1||(++i)&&(++j);
    printf("��4�����:\n%d\t%d\t%d\n",i,j,y);
    system("pause");
    return 0;
}