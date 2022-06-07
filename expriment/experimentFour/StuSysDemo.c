/*��һ˵һ,���Ǹ����̵�ϵͳ,����,���þ���
2022.6.5  �߼���
*/

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



int main()
{
    int ClassNum;
    int Choice;
    
    

    while(true)// �༶����
    {
        printf("������༶����:");
        if(scanf("%d",&ClassNum) != 0 && ClassNum <= CLASSNUM) break;
        else printf("������С��%d������!\n",CLASSNUM);
        setbuf(stdin, NULL);
    }

    while(true)// ����ѡ��
    {
        Meau(ClassNum);

        while(true) // �����֧                //���Ըĳɺ���,�п���˵
        {
            if(scanf("%d",&Choice) != 0 && Choice <= CHOICE) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n��������ȷ������!  ����������!\n\n");
            printf("��������Ҫʹ�õĹ�������Ӧ�ı��:");
            setbuf(stdin, NULL);
            
        
        }

        switch(Choice)
        {
            case 1: // ¼��
                LoggingData(ClassNum);
                break;
            case 2: // �鿴
                PrintData(ClassNum);
                break;
            case 3: // �޸�
                Modify();
                break;
            case 4: // ͳ��
                Statistics(ClassNum);
                break;
            case 5: //����
                Sort(ClassNum);
                break;
            case 6: // ����
                Insert(ClassNum,&ClassNum);
                break;
            case 7: // ɾ��
                Delete(&ClassNum);
                break;
            case 8: // �˳�
                exit(EXIT_SUCCESS);
                break;
        }
        
        {   // ����
            printf("������ո������.....");
            getchar();
            setbuf(stdin, NULL);
            system("cls");
        }
    }
    
    return 0;
}


void Meau(int ClassNum)  // �˵�����
{
    printf("��ӭ����ѧ���ɼ�ͳ��С����!\t");
    printf("�༶����Ϊ:%d\n\n\n",ClassNum);
    printf("%-30s","1.¼��");
    printf("%-30s","2.�鿴");
    printf("%-30s\n\n","3.�޸�");
    printf("%-30s","4.ͳ��");
    printf("%-30s","5.���ܷ�����");
    printf("%-30s\n\n","6.����");
    printf("%-30s","7.ɾ��");
    printf("%-30s\n\n\n","8.�˳�");
    printf("��������Ҫʹ�õĹ�������Ӧ�ı��:");
}

void LoggingData(int ClassNum)  // ¼��ɼ�              ����û��
{
    int i;
    for (i = 0; i < ClassNum; i++)
    {
        while(1)
            {
                printf("����%d��ͬѧ������:",i+1);
                gets(Students[i].Name);
                printf("����%d��ͬѧ��ѧ��:",i+1);
                gets(Students[i].No);
                printf("����%d��ͬѧ���Ա�:",i+1);
                gets(Students[i].Sex);
                printf("����%d��ͬѧ��C���Գɼ�:",i+1);
                scanf("%f",&Students[i].CScore);
                printf("����%d��ͬѧ����ѧ�ɼ�:",i+1);
                scanf("%f",&Students[i].MathScore);
                printf("����%d��ͬѧ��Ӣ��ɼ�:",i+1);
                scanf("%f",&Students[i].EnglishScore);
                Students[i].SumScore = Students[i].EnglishScore + Students[i].MathScore + Students[i].CScore;
                setbuf(stdin, NULL);
                break;
            }
    }
}

void PrintData(int ClassNum)  // ��ӡ�ɼ�
{
    int i;
    for (i = 0; i < ClassNum; i++)
    {
        printf("����:");
        printf("%s",Students[i].Name);
        printf("  ѧ��:");
        printf("%s",Students[i].No);
        printf("  �Ա�:");
        printf("%s",Students[i].Sex);
        printf("  C���Է���:");
        printf("%g",Students[i].CScore);
        printf("  ��ѧ����:");
        printf("%g",Students[i].MathScore);
        printf("  Ӣ�����:");
        printf("%g",Students[i].EnglishScore);
        printf("  �ܷ�:");
        printf("%g",Students[i].SumScore);
        printf("\n");
    }
}

void Modify(void)  // �޸�����               //1.���ڷ��ʲ�����ѧ������,�ø���־����,�п���˵  2.��ĳ�ͨ������ѧ��������,����д��
{
    int ModifyNo;
    char ModifyName[11],ModifySex[3];
    int Choice;
    float ModifyEnglishScore,ModifyMathScore,ModifyCScore;
    printf("�����뱻�޸�����ѧ����ѧ��(��λ):");
    while(true) // ����ѧ��(����,û�ñ�־����)               //�ͼ����֧��һ��
        {
            if(scanf("%d",&ModifyNo) != 0 && ModifyNo <= CLASSNUM) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n��������ȷ������!  ����������!\n\n");
            setbuf(stdin, NULL);
        }
    
    printf("Ҫ�޸ĵ�������\t");
    printf("1.����");
    printf("2.�Ա�  ");
    printf("3.Ӣ��ɼ�  ");
    printf("4.�����ɼ�  ");
    printf("5.C���Գɼ�  :");
    


    while(true) // �����֧                //���Ըĳɺ���,�п���˵
        {
            if(scanf("%d",&Choice) != 0 && Choice <= 5) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n��������ȷ������!  ����������!\n\n");
            printf("��������Ҫʹ�õĹ�������Ӧ�ı��:");
            setbuf(stdin, NULL);
            
        
        }
    
    switch(Choice)
    {
        case 1:
            printf("%s��ѧ����������:%s\t",Students[ModifyNo-1].No,Students[ModifyNo-1].Name); // ��װ����
            printf("��Ҫ�޸ĳ�:");
            scanf("%s",ModifyName);
            strcpy(Students[ModifyNo-1].Name,ModifyName);
            break;
        case 2:
            printf("%d��ѧ�����Ա���:%s\t",Students[ModifyNo-1].No,Students[ModifyNo-1].Sex);
            printf("��Ҫ�޸ĳ�:");
            scanf("%s",ModifySex);
            strcpy(Students[ModifyNo-1].Sex,ModifySex);
            break;
        case 3:
            printf("%s��ѧ����Ӣ��ɼ���:%g\t",Students[ModifyNo-1].No,Students[ModifyNo-1].EnglishScore);
            printf("��Ҫ�޸ĳ�:");
            scanf("%f",ModifyEnglishScore);
            Students[ModifyNo-1].EnglishScore = ModifyEnglishScore;

            Students[ModifyNo-1].SumScore = Students[ModifyNo-1].EnglishScore + 
                                            Students[ModifyNo-1].MathScore + 
                                            Students[ModifyNo-1].CScore;
            break;
        case 4:
            printf("%s��ѧ���ĸ����ɼ���:%g\t",Students[ModifyNo-1].No,Students[ModifyNo-1].MathScore);
            printf("��Ҫ�޸ĳ�:");
            scanf("%f",ModifyMathScore);
            Students[ModifyNo-1].MathScore = ModifyMathScore;
            Students[ModifyNo-1].SumScore = Students[ModifyNo-1].EnglishScore + 
                                            Students[ModifyNo-1].MathScore + 
                                            Students[ModifyNo-1].CScore;
            break;
        case 5:
            printf("%s��ѧ����C���Գɼ���:%g\t",Students[ModifyNo-1].No,Students[ModifyNo-1].CScore);
            printf("��Ҫ�޸ĳ�:");
            scanf("%f",ModifyCScore);
            Students[ModifyNo-1].CScore = ModifyCScore;
            Students[ModifyNo-1].SumScore = Students[ModifyNo-1].EnglishScore + 
                                            Students[ModifyNo-1].MathScore + 
                                            Students[ModifyNo-1].CScore;
            break;


    }
}

void Statistics(int ClassNum)  //ͳ�Ƴɼ�           ���ԸĽ�һ��
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
    printf("C����:");
    printf("�����������:%2d\t",good);
    printf("���õ�������:%2d\t",well);
    printf("�еȵ�������:%2d\t",normal);
    printf("�����������:%2d\t",pass);
    printf("�������������:%2d\n",failure);
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
    printf("��ѧ: ");
    printf("�����������:%2d\t",good);
    printf("���õ�������:%2d\t",well);
    printf("�еȵ�������:%2d\t",normal);
    printf("�����������:%2d\t",pass);
    printf("�������������:%2d\n",failure);
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
    printf("Ӣ��: ");
    printf("�����������:%2d\t",good);
    printf("���õ�������:%2d\t",well);
    printf("�еȵ�������:%2d\t",normal);
    printf("�����������:%2d\t",pass);
    printf("�������������:%2d\n\n",failure);
  }
}

void Sort(int ClassNum)  //����      ����һ��ð�ݴպϴպ�
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
        printf("����:");
        printf("%s",Students[i].Name);
        printf("  ѧ��:");
        printf("%s",Students[i].No);
        printf("  �Ա�:");
        printf("%s",Students[i].Sex);
        printf("  C���Է���:");
        printf("%g",Students[i].CScore);
        printf("  ��ѧ����:");
        printf("%g",Students[i].MathScore);
        printf("  Ӣ�����:");
        printf("%g",Students[i].EnglishScore);
        printf("  �ܷ�:");
        printf("%g",Students[i].SumScore);
        printf("\n");
    }
}

void Insert(int ClassNum,int* PNum) // ����         ������,��ʱ���ٸ�
{
    int InsertNo;
    int j;

    printf("Ҫ����ѧ����ѧ��(��λ)��:");
    scanf("%d",&InsertNo);

    /*while(true) // ����ѧ��(����,û�ñ�־����)               //�ͼ����֧��һ��
        {
            if(scanf("%d",&InsertNo) != 0 &&InsertNo <= CLASSNUM) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n��������ȷ������!  ����������!\n\n");
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
    printf("����%d��ͬѧ������:",InsertNo);
    gets(Students[InsertNo-1].Name);
    printf("����%d��ͬѧ��ѧ��:",InsertNo);
    gets(Students[InsertNo-1].No);
    printf("����%d��ͬѧ���Ա�:",InsertNo);
    gets(Students[InsertNo-1].Sex);
    printf("����%d��ͬѧ��C���Գɼ�:",InsertNo);
    scanf("%f",&Students[InsertNo-1].CScore);
    printf("����%d��ͬѧ����ѧ�ɼ�:",InsertNo);
    scanf("%f",&Students[InsertNo-1].MathScore);
    printf("����%d��ͬѧ��Ӣ��ɼ�:",InsertNo);
    scanf("%f",&Students[InsertNo-1].EnglishScore);
    Students[InsertNo-1].SumScore = Students[InsertNo-1].EnglishScore + Students[InsertNo-1].MathScore + Students[InsertNo-1].CScore;
    setbuf(stdin, NULL);


}

void Delete(int* ClassNum)  // ɾ��              ��û�в���ʾ��0��ɾ��?
{
    int ModifyNo;

    printf("�����뱻ɾ������ѧ����ѧ��:");

    while(true) // ����ѧ��(����,û�ñ�־����)               //�ͼ����֧��һ��
        {
            if(scanf("%d",&ModifyNo) != 0 && ModifyNo <= CLASSNUM) 
            {
                setbuf(stdin, NULL);
                break;
            }
            else printf("\n��������ȷ������!  ����������!\n\n");
            setbuf(stdin, NULL);
            
        
        }

    strcpy(Students[ModifyNo-1].Name,"");
    strcpy(Students[ModifyNo-1].Sex,"");
    Students[ModifyNo-1].CScore =0;
    Students[ModifyNo-1].EnglishScore =0;
    Students[ModifyNo-1].MathScore =0;

    (*ClassNum)++;
    
}