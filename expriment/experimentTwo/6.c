// ���1��+2��+����+n���Ľ����

int main()
{
    int sum = 1, num, i, sum_plus=0;
    printf("������һ��������:");
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
        printf("�������!");
    }
    printf("n!=%d",sum_plus);
    getch();
    return 0;
}