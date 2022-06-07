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