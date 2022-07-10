#include<stdio.h>
#include<stdlib.h>
struct swap 
{
    int x;
};
 void swapping (struct swap *p1,struct swap *p2);
int main()
{
    struct swap b1,b2,*p1,*p2;
    system("cls");
    printf("enter the numbers : ");
    scanf("%d%d",&b1.x,&b2.x);
    printf("before swapping the value are : %d , %d\n",b1.x,b2.x);
    swapping(&b1,&b2);
    printf("after swapping the vlaues are : %d , %d\n",p1->x,p2->x);
    return 0;
}
void swapping (struct swap *p1,struct swap *p2)
{
    int temp;
    temp=p1->x;
    p1->x=p2->x;
    p2->x=temp;   
}
/*void swapping (struct swap *p1,struct swap *p2)
{
    int temp;
    temp=p1;
    p1=p2;
    p2=temp;   
    //printf("after swapping the vlaues are : %d , %d\n",(*p1).x,(*p2).x);
}*/