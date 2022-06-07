/* 第一版:简单的学生成绩管理系统  只能实现一个班级一门课成绩的交互
   完成时间:2022.4.22
   第二版:有进步的简单的学生成绩管理系统  只能实现一个班级多门课成绩的交互 二维数组?
   1.高数 2.线代 3.C语言
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
    
    while(1)// 班级人数
    {
        printf("请输入班级人数:");
        if(scanf("%d",&classnum) != 0 && classnum <= N) break;
        else printf("请输入小于%d的整数!\n",N+1);
        setbuf(stdin, NULL);
    }
    
    while(1)//选择不同的功能
    {
        MainMeau(classnum);

        while(1)
        {
            if(scanf("%d",&choice) != 0 && choice <= 10) 
                break;
            else 
                printf("请输入正确的数字!\n请重新输入!");

            setbuf(stdin, NULL);
        }

        
        switch (choice)//根据用户输入的数字进入不同的分支
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

//欢迎界面
void MainMeau(classnum)
{
    int fun, num;
    
    printf("欢迎访问学生成绩统计小程序!\t");
    printf("班级人数为:%d\n\n\n",classnum);
    printf("1.录入成绩\t\t");
    printf("2.输出成绩\t\t");
    printf("3.统计各分段人数\n\n");
    printf("4.输出平均成绩\t\t");
    printf("5.输出合格率\t\t");
    printf("6.输出最高分\n\n");
    printf("7.输出最低分\t\t");
    printf("8.按分数从高到低排序\t\t");
    printf("9.计算成绩的标准差\t\t");
    printf("10.退出程序\n\n\n");
    printf("请输入你要使用的功能所对应的编号:");
}

//录入成绩
void LoggingData(float score[],int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            float MiddleScore[N], FinalScore[N];
            
            while(1)//期中成绩
            {
                printf("输入%d号同学的期中成绩:",i+1);
                if(scanf("%f",&MiddleScore[i]) != 0 && MiddleScore[i] <= 100) break;
                else printf("请输入小于100的数!\n请重新输入!");
                setbuf(stdin, NULL);
            }

            
            while(1)//期末成绩
            {
                printf("输入%d号同学的期末成绩:",i+1);
                if(scanf("%f",&FinalScore[i]) != 0 && FinalScore[i] <= 100) break;
                else printf("请输入小于100的数!  请重新输入!\n");
                setbuf(stdin, NULL);
            }
            
            score[i]= (MiddleScore[i] + FinalScore[i]) / 2.0;
        }
        
}

//打印成绩
void PrintData(float score[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            printf("第%d号同学的成绩是:%g\n",i+1,score[i]);
        }
        printf("\n");
        
}

//统计各分段人数
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
    printf("优秀的人数有:%d\n",good);
    printf("良好的人数有:%d\n",well);
    printf("中等的人数有:%d\n",normal);
    printf("及格的人数有:%d\n",pass);
    printf("不及格的人数有:%d\n",failure);
    printf("\n");
}

//输出平均成绩
void Averge(float score[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=score[i];
    }
    printf("平均成绩是:%g\n",sum/n);
}
//统计合格率
void Pass(float score[], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        if (score[i] >= 60)
        sum++;
    }
    printf("合格率为:%g \x25\n",100 * sum/(float)n);
}                                       

//输出最高成绩
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
    printf("最高分是:%g\t%d号同学\n",max,i+1);
}

//输出最低成绩
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
    printf("最低分是:%g\t%d号同学\n",min, i+1);
}

//将成绩从高到低排序 bubble sort 
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
    printf("%g\t%d号同学\n",score[i],name[i]);
}

//计算成绩的标准差
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
    printf("标准差为:%g\n",sqrt(aveDev));
}

