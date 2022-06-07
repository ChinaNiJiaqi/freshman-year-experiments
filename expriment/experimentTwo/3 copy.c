// 从键盘中输入一个  正整数 f n，求n!

int main()
{
    int fn = 1, num, i;
    printf("请输入一个正整数:");
    scanf("%d",&num);

    if (num>0)
    {
        for (i=1;i <= num;i++)
        {
            fn = fn*i;
        }
    }
    else
    {
        printf("输入错误!");
    }
    
    printf("n!=%d",fn);
    getch();
    return 0;
}
