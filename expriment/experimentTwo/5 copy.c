// �������[a,b]֮�������������a,b�ľ���ֵ���û�ͨ������ָ��

#include<stdio.h>
#include<math.h>

int main()
{
    int start, end, i, j,flag;
    printf("����һ�������ж���,�������[a,b]����������\n");
    printf("������a:");
    scanf("%d",&start);
    printf("������b:");
    scanf("%d",&end);

            printf("����:");
            for (i = start;i <= end;i++)
            {
                flag = 0;
                for (j = 2;j <=(int)sqrt(i);j++)
                {
                    if (i % j == 0)
                    {
                        flag++;
                        break;
                    }
                }
                if (flag==0)
                {
                    printf("%d ",i);
                }
            }
        
    

    getch();
    return 0;
}