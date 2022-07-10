#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int roll_no;
    float per;
    char name[20];
};
int main()
{
    struct student s1,s2;
    system("cls");
    printf("enter the roll no. and the percentage of the student : ");
    scanf("%d%f",&s1.roll_no,&s1.per);
    printf("enter the name of firs studen : ");
    fflush(stdin);
    gets(s1.name);
    printf("enter the roll no. and the percentage of the student : ");
    scanf("%d%f",&s2.roll_no,&s2.per);
    printf("enter the name of secound student : ");
    fflush(stdin);
    gets(s2.name);
    printf("student 1\n%d\t%s\t%f\nstudent 2\n%d\t%s\t%f\n",s1.roll_no,s1.name,s1.per,s2.roll_no,s2.name,s2.per);
    if(s1.per>s2.per)
    printf("s1 percentage is greater");
    else if(s1.per<s2.per)
    printf("s2 percentage is greater");
    else
    printf("the percentage of s1 and s1 is same ");
    return 0;
}