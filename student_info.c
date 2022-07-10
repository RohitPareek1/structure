#include<stdlib.h>
#include<stdio.h>
struct details
{
    char name[20];
    int age,class,roll_no;
    float percentage;
};
int main()
{
    system("cls");
  struct details s1,s2;
  printf("enter the roll no. of student : ");
  scanf("%d",&s1.roll_no);
  printf("enter the name of student : ");
  scanf("%s",&s1.name); 
  printf("enter the age of studnet : ");
  scanf("%d",&s1.age);
  printf("enter the class of student : ");
  scanf("%d",&s1.class);
  printf("enter the percentage of student : ");
  scanf("%g",&s1.percentage); 
  printf("enter the roll no. of student : ");
  scanf("%d",&s2.roll_no);
  printf("enter the name of student : ");
  scanf("%s",&s2.name); 
  printf("enter the age of studnet : ");
  scanf("%d",&s2.age);
  printf("enter the class of student : ");
  scanf("%d",&s2.class);
  printf("enter the percentage of student : ");
  scanf("%g",&s2.percentage); 
  printf("the roll no.of the students are %d and %d\n",s1.roll_no,s2.roll_no);
  printf("the name of the students are %s and %s\n",s1.name,s2.name);
  printf("the age of both the sudents are %d and %d\n",s1.age,s2.age);
  printf("the class of both the students are %d and %d\n",s1.class,s2.class);
  printf("the percentage of both the stduents are %g and %g\n",s1.percentage,s2.percentage);
    return 0;
}