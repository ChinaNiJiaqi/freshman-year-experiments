#include<stdio.h>   //stdio.h  stdlib.h  string.h  boo.h
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define CLASSNUM 100    //�༶��������������
#define CHOICE 8    //ѡ��
#define STUDENTNO 11  

struct StudentsInformation // ѧ��:����,ѧ��,�༶,C����,��ѧ,Ӣ��
    {
        char Name[9];
        char No[STUDENTNO]; //XXXX(��ѧ���)+XX(ϵ��)+XX(�༶)+XX(�༶ѧ��)
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