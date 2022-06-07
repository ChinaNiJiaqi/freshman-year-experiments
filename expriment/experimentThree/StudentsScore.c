/* ��һ��:�򵥵�ѧ���ɼ�����ϵͳ  ֻ��ʵ��һ���༶һ�ſγɼ��Ľ���
   ���ʱ��:2022.4.22
   �ڶ���:�н����ļ򵥵�ѧ���ɼ�����ϵͳ  ֻ��ʵ��һ���༶���ſγɼ��Ľ��� ��ά����?
   1.���� 2.�ߴ� 3.C����
 */

#include<stdlib.h>    //stdlib.h  stdio.h  stdbool.h  math.h
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define N 100

void MainMeau(classnum);
void LoggingData(float score[],int n);
void PrintData(float a[], int n);
void Grade(float num[], int n);
void Averge(float score[], int n);
void Pass(float score[], int n);
void Max(float score[], int n);
void Min(float score[], int n);
void Sort(float score[], int n);
void StandardDev(float score[], int n);
void GetNum(float score[],int n);

int main(void)
{
    int choice;
    int classnum;
    float score[N];
    
    while(1)// �༶����
    {
        printf("������༶����:");
        if(scanf("%d",&classnum) != 0 && classnum <= N) break;
        else printf("������С��%d������!\n",N+1);
        setbuf(stdin, NULL);
    }
    
    while(1)//ѡ��ͬ�Ĺ���
    {
        MainMeau(classnum);

        while(1)
        {
            if(scanf("%d",&choice) != 0 && choice <= 10) 
                break;
            else 
                printf("��������ȷ������!\n����������!");

            setbuf(stdin, NULL);
        }

        
        switch (choice)//�����û���������ֽ��벻ͬ�ķ�֧
        {
            case 1:
            LoggingData(score,classnum);
            printf("\n");
            break;

            case 2:
            PrintData(score,classnum);
            printf("\n");
            break;

            case 3:
            Grade(score,classnum);
            printf("\n");
            break;

            case 4:
            Averge(score,classnum);
            printf("\n");
            break;

            case 5:
            Pass(score,classnum);
            printf("\n");
            break;

            case 6:
            Max(score,classnum);
            printf("\n");
            break;

            case 7:
            Min(score,classnum);
            printf("\n");
            break;

            case 8:
            Sort(score,classnum);
            printf("\n");
            break;

            case 9:
            StandardDev(score,classnum);
            printf("\n");
            break;

            case 10:
            exit(EXIT_SUCCESS);
            
            default:
            break;
        }
            
           
    }

    getch();
    return 0;
}

//��ӭ����
void MainMeau(classnum)
{
    int fun, num;
    
    printf("��ӭ����ѧ���ɼ�ͳ��С����!\t");
    printf("�༶����Ϊ:%d\n\n\n",classnum);
    printf("1.¼��ɼ�\t\t");
    printf("2.����ɼ�\t\t");
    printf("3.ͳ�Ƹ��ֶ�����\n\n");
    printf("4.���ƽ���ɼ�\t\t");
    printf("5.����ϸ���\t\t");
    printf("6.�����߷�\n\n");
    printf("7.�����ͷ�\t\t");
    printf("8.�������Ӹߵ�������\t\t");
    printf("9.����ɼ��ı�׼��\t\t");
    printf("10.�˳�����\n\n\n");
    printf("��������Ҫʹ�õĹ�������Ӧ�ı��:");
}

//¼��ɼ�
void LoggingData(float score[],int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            float MiddleScore[N], FinalScore[N];
            
            while(1)//���гɼ�
            {
                printf("����%d��ͬѧ�����гɼ�:",i+1);
                if(scanf("%f",&MiddleScore[i]) != 0 && MiddleScore[i] <= 100) break;
                else printf("������С��100����!\n����������!");
                setbuf(stdin, NULL);
            }

            
            while(1)//��ĩ�ɼ�
            {
                printf("����%d��ͬѧ����ĩ�ɼ�:",i+1);
                if(scanf("%f",&FinalScore[i]) != 0 && FinalScore[i] <= 100) break;
                else printf("������С��100����!  ����������!\n");
                setbuf(stdin, NULL);
            }
            
            score[i]= (MiddleScore[i] + FinalScore[i]) / 2.0;
        }
        
}

//��ӡ�ɼ�
void PrintData(float score[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            printf("��%d��ͬѧ�ĳɼ���:%g\n",i+1,score[i]);
        }
        printf("\n");
        
}

//ͳ�Ƹ��ֶ�����
void Grade(float num[], int n)
{
    int good = 0, well = 0, normal = 0, pass = 0, failure = 0;
    for(int i = 0;i <n;i++)
    {
        if (num[i] >= 90)
        {
            good++;
        }
        else if (num[i] >= 80)
        {
            well++;
        }
        else if (num[i] >= 70)
        {
            normal++;
        }
        else if (num[i] >= 60)
        {
            pass++;
        }
        else if (num[i] > 0)
        {
            failure++;
        }
    }
    printf("�����������:%d\n",good);
    printf("���õ�������:%d\n",well);
    printf("�еȵ�������:%d\n",normal);
    printf("�����������:%d\n",pass);
    printf("�������������:%d\n",failure);
    printf("\n");
}

//���ƽ���ɼ�
void Averge(float score[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=score[i];
    }
    printf("ƽ���ɼ���:%g\n",sum/n);
}
//ͳ�ƺϸ���
void Pass(float score[], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        if (score[i] >= 60)
        sum++;
    }
    printf("�ϸ���Ϊ:%g \x25\n",100 * sum/(float)n);
}                                       

//�����߳ɼ�
void Max(float score[], int n)
{
    float max;
    int i;
    for (max = score[0], i = 0; i < n; i++)
    {
        if (max < score[i])
        max = score[i];
    }
    for (i = 0; i < n; i++)
    if (score[i]< max+1e-10&&score[i]>max-1e-10)
    printf("��߷���:%g\t%d��ͬѧ\n",max,i+1);
}

//�����ͳɼ�
void Min(float score[], int n)
{
    float min;
    int i;
    for (min = score[0], i = 0; i < n; i++)
    {
        if (min > score[i])
        min = score[i];
    }
    for (i = 0; i < n; i++)
    if (score[i]< min+1e-10&&score[i]>min-1e-10)
    printf("��ͷ���:%g\t%d��ͬѧ\n",min, i+1);
}

//���ɼ��Ӹߵ������� bubble sort 
void Sort(float score[], int n)
{
    int i,j,tmp,name[n];
    int tmptmp;

    for (i = 0;i < n;i++)
    name[i] = i + 1;

    for (i = 0;i < n-1;i++)
    {
        for (j = 0;j < n-i-1;j++)
        {
            if (score[j] < score[j+1])
            {
                tmp = score[j+1];
                score[j+1] = score[j];
                score[j] = tmp;
                tmptmp = name[j];
                name[j] = name[j+1];
                name[j+1] = tmptmp;
            }
        }
    }
    for (i = 0;i < n;i++)
    printf("%g\t%d��ͬѧ\n",score[i],name[i]);
}

//����ɼ��ı�׼��
void StandardDev(float score[], int n)
{
    double sum,ave,dev,aveDev;

    for (int i = 0; i < n; i++)
    {
        sum+=score[i];
    }

    ave = sum / n;

    for (int i = 0; i < n; i++)
    {
        dev += abs(score[i]-ave) * abs(score[i]-ave);
    }

    aveDev = dev / n;
    printf("��׼��Ϊ:%g\n",sqrt(aveDev));
}

