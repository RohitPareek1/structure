#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[100];
};
int  main()
{
    struct student s1;
    system("cls");
    strcpy(s1.name,"rohit");
    printf("my name is %s",s1.name);
    return 0;
}