// 求解1！+2！+……+n！的结果。

int main()
{
    int sum = 1, num, i, sum_plus=0;
    printf("请输入一个正整数:");
    scanf("%d",&num);

    if (num>0)
    {
        for (i=1;i < (num + 1);i++)
        {
            sum = sum * i;
            sum_plus = sum_plus + sum;
        }
    }
    else
    {
        printf("输入错误!");
    }
    printf("n!=%d",sum_plus);
    getch();
    return 0;
}