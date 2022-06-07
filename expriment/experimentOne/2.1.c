/*利用sizeof运算符计算所用编译环境的各数据类型的空间分配大小。
（short int、int、long int、unsigned int、float、double、char）*/
#include<stdio.h>

int main()
{
    printf("short int;%d字节\n",sizeof(short int));
    printf("int;%d字节\n",sizeof(int));
    printf("long int;%d字节\n",sizeof(long int));
    printf("unsigned int;%d字节\n",sizeof(unsigned int));
    printf("float;%d字节\n",sizeof(float));
    printf("double;%d字节\n",sizeof(double));
    printf("char;%d字节\n",sizeof(char));
    getch();
    return 0;
}
