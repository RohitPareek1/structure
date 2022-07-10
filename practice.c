#include<stdio.h>
#include<stdlib.h>
int swap (int *p1,int *p2);
int main()
{
    int a,b;
    system("cls");
    printf("enter any two no. ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
   // printf("%d %d",a,b);
    return 0;
}
int swap (int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",*p1,*p2);
}
