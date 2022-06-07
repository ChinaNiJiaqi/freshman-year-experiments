//编程计算任意一个长方形、正方形、圆、三角形的周长和面积。(建议⺎的值定义符号常量来表示)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PAI 3.14

int main()
{
    int type,flag=0;
    float a, b, c, p, length, area;
    printf("输入你想要计算的图形类型");
    printf("0.正方形 1.长方形 2.圆 3.三角形:");
    scanf("%d",&type);
    switch(type)//计算的为除三角形以外的图形
    {
        case 0:
            printf("输入任意一条边长:");
            scanf("%f",&a);
            length=a*4;
            area=a*a;
            printf("length:%f\n",length);
            printf("area:%f\n",area);
            flag=1;
            break;
        case 1:
            printf("输入任意两条不平行边的边长:");
            scanf("%f%f",&a,&b);
            length=(a+b)*2;
            area=a*b;
            printf("length:%f\n",length);
            printf("area:%f\n",area);
            flag=1;
            break;
        case 2:
            printf("输入半径长度:");
            scanf("%f",&a);
            length=2*PAI*a;
            area=PAI*a*a;
            printf("length:%f\n",length);
            printf("area:%f\n",area);
            flag=1;
            break;
        case 3:
            while(flag==0)
            {
                printf("输入三条边长:");
                scanf("%f%f%f",&a,&b,&c);
                if(a+b<=c||a+c<=b||b+c<=a)
                {
                    printf("输入的数据不构成三角形,请重新输入!");
                    flag=0;
                }
                else
                {
                    length=a+b+c;
                    p=length/2;
                    area=sqrt(p*(p-a)*(p-b)*(p-c));
                    printf("length:%f\n",length);
                    printf("area:%f\n",area);
                    flag=1;
                }
            }
            break;
        default:
            printf("请输入规定序号!");         
    }
    
    system("pause");
    return 0;
}
