// �Ӽ���������һ��  ������ f n����n!

int main()
{
    int fn = 1, num, i;
    printf("������һ��������:");
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
        printf("�������!");
    }
    
    printf("n!=%d",fn);
    getch();
    return 0;
}
