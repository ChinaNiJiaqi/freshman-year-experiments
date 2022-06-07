/*编程输出一名学生的基本信息（学号、姓名、性别、年龄、某门课成绩）。
  自己确定数据内容，自己设计输出效果（使用printf函数的格式说明字符，
  对输出的数据进行格式设计）。
*/

#include<stdio.h>

int main()
{
    printf("name = %s\n","阿白");
    printf("gender=男\n");
    printf("number = %s\n","2021060823");
    printf("age= %d\n",3);
    printf("score=%f\n",66);
    getch();
    return 0;
}
//问题:学号定义int会溢出,char无法填入汉字,在对name和number连续定义两个字符串类型时会出现字符串连接