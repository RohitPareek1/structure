#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int roll_no;
    char name[20];
    float per;
};
int main()
{
    struct student s[10];
    int i,n,maxper=0,maxpos=0;
    system("cls");
    printf("enter the numbe of students : ");
    scanf("%d",&n);
    printf("enter the roll no. , name ,percentage\n");
    for(i=0;i<n;i++)
    {
    scanf("%d%s%f",&s[i].roll_no,&s[i].name,&s[i].per);
    if(s[i].per>maxper)
        {
           maxper=s[i].per;
           maxpos=i;
        }
    }
    printf("max percetage is %f",s[maxpos].name);
    return 0;
}