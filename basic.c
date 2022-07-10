#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int roll ;
    float percentage;
    char name[20];
};
int main()
{
    struct student s1,s2,s3;
    system("cls");
    s1.roll =43;
    s2.roll =44;
    s3.roll =45;
    s1.percentage =92.0;
    s2.percentage =93.0;
    s3.percentage =80.6;
    printf("the marks roll no of raghav is %d and percentage is %f\n",s1.roll,s1.percentage);
    printf("the marks roll no of ritika is %d and percentage is %f\n",s2.roll,s2.percentage);
   printf("the marks roll no of rohit is %d and percentage is %f\n",s3.roll,s3.percentage);
    return 0;
}