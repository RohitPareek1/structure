#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int roll;
    char name [30];
    float per;
};
int main()
{
    struct student s1={101,"ajay",75.5},s2;
    struct student s[2]={{1,"a",70},{2,"b",80},{3,"c",90}};
    system("cls");
    s2=s[1];
    printf("%d\t%s\t%f",s2.roll,s2.name,s2.per);
    return 0;
}