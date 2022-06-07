/*有一说一,这是个很捞的系统,但是,能用就行
2022.6.5  倪嘉棋
*/

#include<stdio.h>   //stdio.h  stdlib.h  string.h  boo.h
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define CLASSNUM 100    //班级人数最大可能人数
#define CHOICE 8    //选择
#define STUDENTNO 11  

struct StudentsInformation // 学生:姓名,学号,班级,C语言,数学,英语
    {
        char Name[9];
        char No[STUDENTNO]; //XXXX(入学年份)+XX(系别)+XX(班级)+XX(班级学号)
        char Sex[3];
        float CScore;
        float MathScore;
        float EnglishScore;
        float SumScore;
        
}
Students[CLASSNUM];

void Meau(int ClassNum);
void LoggingData(int ClassNum);
void PrintData(int ClassNum);
void Modify(void);
void Statistics(int ClassNum);
void Sort(int ClassNum);
void Insert(int ClassNum,int* Pum);
void Delete(int* ClassNum);



int main()
{
    int ClassNum;
    int Choice;
    
    

    while(true)// 班级人数
    {
        printf("请输入班级人数:");
        if(scanf("%d",&ClassNum) != 0 && ClassNum <= CLASSNUM) break;
        else printf("请输入小于%d的整数!\n",CLASSNUM);
        setbuf(stdin, NULL);
    }

    while(true)// 功能选择
    {
        Meau(ClassNum);

        while(true) // 检验分支                //可以改成函数,有空再说
        {
            if(scanf("%d",&Choice) != 0 && Choice <= CHOICE) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n请输入正确的数字!  请重新输入!\n\n");
            printf("请输入你要使用的功能所对应的编号:");
            setbuf(stdin, NULL);
            
        
        }

        switch(Choice)
        {
            case 1: // 录入
                LoggingData(ClassNum);
                break;
            case 2: // 查看
                PrintData(ClassNum);
                break;
            case 3: // 修改
                Modify();
                break;
            case 4: // 统计
                Statistics(ClassNum);
                break;
            case 5: //排序
                Sort(ClassNum);
                break;
            case 6: // 插入
                Insert(ClassNum,&ClassNum);
                break;
            case 7: // 删除
                Delete(&ClassNum);
                break;
            case 8: // 退出
                exit(EXIT_SUCCESS);
                break;
        }
        
        {   // 清屏
            printf("按任意空格键继续.....");
            getchar();
            setbuf(stdin, NULL);
            system("cls");
        }
    }
    
    return 0;
}


void Meau(int ClassNum)  // 菜单界面
{
    printf("欢迎访问学生成绩统计小程序!\t");
    printf("班级人数为:%d\n\n\n",ClassNum);
    printf("%-30s","1.录入");
    printf("%-30s","2.查看");
    printf("%-30s\n\n","3.修改");
    printf("%-30s","4.统计");
    printf("%-30s","5.按总分排序");
    printf("%-30s\n\n","6.插入");
    printf("%-30s","7.删除");
    printf("%-30s\n\n\n","8.退出");
    printf("请输入你要使用的功能所对应的编号:");
}

void LoggingData(int ClassNum)  // 录入成绩              检验没做
{
    int i;
    for (i = 0; i < ClassNum; i++)
    {
        while(1)
            {
                printf("输入%d号同学的姓名:",i+1);
                gets(Students[i].Name);
                printf("输入%d号同学的学号:",i+1);
                gets(Students[i].No);
                printf("输入%d号同学的性别:",i+1);
                gets(Students[i].Sex);
                printf("输入%d号同学的C语言成绩:",i+1);
                scanf("%f",&Students[i].CScore);
                printf("输入%d号同学的数学成绩:",i+1);
                scanf("%f",&Students[i].MathScore);
                printf("输入%d号同学的英语成绩:",i+1);
                scanf("%f",&Students[i].EnglishScore);
                Students[i].SumScore = Students[i].EnglishScore + Students[i].MathScore + Students[i].CScore;
                setbuf(stdin, NULL);
                break;
            }
    }
}

void PrintData(int ClassNum)  // 打印成绩
{
    int i;
    for (i = 0; i < ClassNum; i++)
    {
        printf("姓名:");
        printf("%s",Students[i].Name);
        printf("  学号:");
        printf("%s",Students[i].No);
        printf("  性别:");
        printf("%s",Students[i].Sex);
        printf("  C语言分数:");
        printf("%g",Students[i].CScore);
        printf("  数学分数:");
        printf("%g",Students[i].MathScore);
        printf("  英语分数:");
        printf("%g",Students[i].EnglishScore);
        printf("  总分:");
        printf("%g",Students[i].SumScore);
        printf("\n");
    }
}

void Modify(void)  // 修改数据               //1.存在访问不存在学号问题,用个标志数组,有空再说  2.想改成通过真正学号来索引,懒得写了
{
    int ModifyNo;
    char ModifyName[11],ModifySex[3];
    int Choice;
    float ModifyEnglishScore,ModifyMathScore,ModifyCScore;
    printf("请输入被修改数据学生的学号(两位):");
    while(true) // 检验学号(初步,没用标志数组)               //和检验分支的一样
        {
            if(scanf("%d",&ModifyNo) != 0 && ModifyNo <= CLASSNUM) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n请输入正确的数字!  请重新输入!\n\n");
            setbuf(stdin, NULL);
        }
    
    printf("要修改的内容是\t");
    printf("1.名字");
    printf("2.性别  ");
    printf("3.英语成绩  ");
    printf("4.高数成绩  ");
    printf("5.C语言成绩  :");
    


    while(true) // 检验分支                //可以改成函数,有空再说
        {
            if(scanf("%d",&Choice) != 0 && Choice <= 5) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n请输入正确的数字!  请重新输入!\n\n");
            printf("请输入你要使用的功能所对应的编号:");
            setbuf(stdin, NULL);
            
        
        }
    
    switch(Choice)
    {
        case 1:
            printf("%s号学生的名字是:%s\t",Students[ModifyNo-1].No,Students[ModifyNo-1].Name); // 假装可以
            printf("你要修改成:");
            scanf("%s",ModifyName);
            strcpy(Students[ModifyNo-1].Name,ModifyName);
            break;
        case 2:
            printf("%d号学生的性别是:%s\t",Students[ModifyNo-1].No,Students[ModifyNo-1].Sex);
            printf("你要修改成:");
            scanf("%s",ModifySex);
            strcpy(Students[ModifyNo-1].Sex,ModifySex);
            break;
        case 3:
            printf("%s号学生的英语成绩是:%g\t",Students[ModifyNo-1].No,Students[ModifyNo-1].EnglishScore);
            printf("你要修改成:");
            scanf("%f",ModifyEnglishScore);
            Students[ModifyNo-1].EnglishScore = ModifyEnglishScore;

            Students[ModifyNo-1].SumScore = Students[ModifyNo-1].EnglishScore + 
                                            Students[ModifyNo-1].MathScore + 
                                            Students[ModifyNo-1].CScore;
            break;
        case 4:
            printf("%s号学生的高数成绩是:%g\t",Students[ModifyNo-1].No,Students[ModifyNo-1].MathScore);
            printf("你要修改成:");
            scanf("%f",ModifyMathScore);
            Students[ModifyNo-1].MathScore = ModifyMathScore;
            Students[ModifyNo-1].SumScore = Students[ModifyNo-1].EnglishScore + 
                                            Students[ModifyNo-1].MathScore + 
                                            Students[ModifyNo-1].CScore;
            break;
        case 5:
            printf("%s号学生的C语言成绩是:%g\t",Students[ModifyNo-1].No,Students[ModifyNo-1].CScore);
            printf("你要修改成:");
            scanf("%f",ModifyCScore);
            Students[ModifyNo-1].CScore = ModifyCScore;
            Students[ModifyNo-1].SumScore = Students[ModifyNo-1].EnglishScore + 
                                            Students[ModifyNo-1].MathScore + 
                                            Students[ModifyNo-1].CScore;
            break;


    }
}

void Statistics(int ClassNum)  //统计成绩           可以改进一下
{

    
  { //c
    int good = 0, well = 0, normal = 0, pass = 0, failure = 0;

    for(int i = 0;i < ClassNum;i++)
    {
        if (Students[i].CScore >= 90)
        {
            good++;
        }
        else if (Students[i].CScore >= 80)
        {
            well++;
        }
        else if (Students[i].CScore >= 70)
        {
            normal++;
        }
        else if (Students[i].CScore >= 60)
        {
            pass++;
        }
        else if (Students[i].CScore > 0)
        {
            failure++;
        }
    }
    printf("C语言:");
    printf("优秀的人数有:%2d\t",good);
    printf("良好的人数有:%2d\t",well);
    printf("中等的人数有:%2d\t",normal);
    printf("及格的人数有:%2d\t",pass);
    printf("不及格的人数有:%2d\n",failure);
  }

  { //math
    int good = 0, well = 0, normal = 0, pass = 0, failure = 0;
    for(int i = 0;i < ClassNum;i++)
    {
        if (Students[i].MathScore >= 90)
        {
            good++;
        }
        else if (Students[i].MathScore >= 80)
        {
            well++;
        }
        else if (Students[i].MathScore >= 70)
        {
            normal++;
        }
        else if (Students[i].MathScore >= 60)
        {
            pass++;
        }
        else if (Students[i].MathScore > 0)
        {
            failure++;
        }
    }
    printf("数学: ");
    printf("优秀的人数有:%2d\t",good);
    printf("良好的人数有:%2d\t",well);
    printf("中等的人数有:%2d\t",normal);
    printf("及格的人数有:%2d\t",pass);
    printf("不及格的人数有:%2d\n",failure);
  }

  { //English
    int good = 0, well = 0, normal = 0, pass = 0, failure = 0;

    for(int i = 0;i < ClassNum;i++)
    {
        if (Students[i].EnglishScore >= 90)
        {
            good++;
        }
        else if (Students[i].EnglishScore >= 80)
        {
            well++;
        }
        else if (Students[i].EnglishScore >= 70)
        {
            normal++;
        }
        else if (Students[i].EnglishScore >= 60)
        {
            pass++;
        }
        else if (Students[i].EnglishScore > 0)
        {
            failure++;
        }
    }
    printf("英语: ");
    printf("优秀的人数有:%2d\t",good);
    printf("良好的人数有:%2d\t",well);
    printf("中等的人数有:%2d\t",normal);
    printf("及格的人数有:%2d\t",pass);
    printf("不及格的人数有:%2d\n\n",failure);
  }
}

void Sort(int ClassNum)  //排序      先用一下冒泡凑合凑合
{
    int i, j;
    int SumScoreTemp,CScoreTmp,MathScoreTemp,EnglishScoreTemp;
    char NameTemp[9],SexTemp[3],NoTemp[STUDENTNO];
    for (i = 0;i < ClassNum-1;i++)
    {
        for (j = 0;j < ClassNum-i-1;j++)
        {
            if (Students[j].SumScore< Students[j + 1].SumScore)
            {
                SumScoreTemp = Students[j + 1].SumScore;
                Students[j + 1].SumScore = Students[j].SumScore;
                Students[j].SumScore = SumScoreTemp;

                CScoreTmp = Students[j + 1].CScore;
                Students[j + 1].CScore = Students[j].CScore;
                Students[j].CScore = CScoreTmp;

                MathScoreTemp = Students[j + 1].MathScore;
                Students[j + 1].MathScore = Students[j].MathScore;
                Students[j].MathScore = MathScoreTemp;

                EnglishScoreTemp = Students[j + 1].EnglishScore;
                Students[j + 1].EnglishScore = Students[j].EnglishScore;
                Students[j].EnglishScore = EnglishScoreTemp;

                strcpy(NameTemp,Students[j+1].Name);
                strcpy(Students[j+1].Name,Students[j].Name);
                strcpy(Students[j].Name,NameTemp);

                strcpy(SexTemp,Students[j+1].Sex);
                strcpy(Students[j+1].Sex,Students[j].Sex);
                strcpy(Students[j].Sex,SexTemp);

                strcpy(NoTemp,Students[j+1].No);
                strcpy(Students[j+1].No,Students[j].No);
                strcpy(Students[j].No,NoTemp);
            }
        }
    }

    for (i = 0; i < ClassNum; i++)
    {
        printf("姓名:");
        printf("%s",Students[i].Name);
        printf("  学号:");
        printf("%s",Students[i].No);
        printf("  性别:");
        printf("%s",Students[i].Sex);
        printf("  C语言分数:");
        printf("%g",Students[i].CScore);
        printf("  数学分数:");
        printf("%g",Students[i].MathScore);
        printf("  英语分数:");
        printf("%g",Students[i].EnglishScore);
        printf("  总分:");
        printf("%g",Students[i].SumScore);
        printf("\n");
    }
}

void Insert(int ClassNum,int* PNum) // 插入         有问题,有时间再改
{
    int InsertNo;
    int j;

    printf("要插入学生的学号(两位)是:");
    scanf("%d",&InsertNo);

    /*while(true) // 检验学号(初步,没用标志数组)               //和检验分支的一样
        {
            if(scanf("%d",&InsertNo) != 0 &&InsertNo <= CLASSNUM) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n请输入正确的数字!  请重新输入!\n\n");
            setbuf(stdin, NULL);
        }*/

    for (j = ClassNum; j >= InsertNo; j--)
    {

        Students[j].SumScore= Students[j-1].SumScore;
        Students[j].CScore= Students[j-1].CScore;
        Students[j].MathScore = Students[j-1].MathScore;
        Students[j].EnglishScore = Students[j-1].EnglishScore;
        strcpy(Students[j].Name,Students[j-1].Name);
        strcpy(Students[j].Sex,Students[j-1].Sex);
        strcpy(Students[j].No,Students[j-1].No);
 
    }

    (*PNum)++;
    printf("输入%d号同学的姓名:",InsertNo);
    gets(Students[InsertNo-1].Name);
    printf("输入%d号同学的学号:",InsertNo);
    gets(Students[InsertNo-1].No);
    printf("输入%d号同学的性别:",InsertNo);
    gets(Students[InsertNo-1].Sex);
    printf("输入%d号同学的C语言成绩:",InsertNo);
    scanf("%f",&Students[InsertNo-1].CScore);
    printf("输入%d号同学的数学成绩:",InsertNo);
    scanf("%f",&Students[InsertNo-1].MathScore);
    printf("输入%d号同学的英语成绩:",InsertNo);
    scanf("%f",&Students[InsertNo-1].EnglishScore);
    Students[InsertNo-1].SumScore = Students[InsertNo-1].EnglishScore + Students[InsertNo-1].MathScore + Students[InsertNo-1].CScore;
    setbuf(stdin, NULL);


}

void Delete(int* ClassNum)  // 删除              有没有不显示的0的删除?
{
    int ModifyNo;

    printf("请输入被删除数据学生的学号:");

    while(true) // 检验学号(初步,没用标志数组)               //和检验分支的一样
        {
            if(scanf("%d",&ModifyNo) != 0 && ModifyNo <= CLASSNUM) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n请输入正确的数字!  请重新输入!\n\n");
            setbuf(stdin, NULL);
            
        
        }

    strcpy(Students[ModifyNo-1].Name,"");
    strcpy(Students[ModifyNo-1].Sex,"");
    Students[ModifyNo-1].CScore =0;
    Students[ModifyNo-1].EnglishScore =0;
    Students[ModifyNo-1].MathScore =0;

    (*ClassNum)++;
    
}