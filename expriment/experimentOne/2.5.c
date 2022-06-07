//编程将用户输入的小写字母转换成大写字母，并且将大写字符和大写字符所对应的ASCII码输出。
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void safe_flush(FILE *fp)//清空scanf函数带来的缓存问题
    {
        int ch;
        while( (ch = fgetc(fp)) != EOF && ch != '\n' );
    }

int main()
{
    int b,flag=0;
    char ch;
    while (flag==0)
    {
        printf("请输入一个小写字符:");
        scanf(" %c",&ch);
        if (ch < 'a'||ch>'z')
        {
            printf("请重新输入!( 确保你输入的是小写字母)\n");
            safe_flush(stdin);
        }
        else
        {
            b=toupper(ch);
            printf("对应的大写字符是:%c\n",b);
            printf("对应的大写字符所对应的ASCII码是:%d\n",b);
            flag=1;
        }
    }

    system("pause");
    return 0;
}
