#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, c, s, area;
    scanf("%f,%f,%f",&a,&b,&c);//ע��','
    s=1.0/2*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%7.0f,b=%7.2f,c=%7.2f,s=%7.2f\n",a,b,c,s);//ʮ������7������
    printf("area=%7.2f\n",area);
    system("pause");
    return 0;
}