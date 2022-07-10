#include<stdio.h>
#include<stdlib.h>
struct height
{
    int feet;
    int inches;
};
struct height box (struct height b1,struct height b2);
int main()
{
    struct height b1,b2,b3;
    system("cls");
    printf("enter the height of first box : ");
    scanf("%d%d",&b1.feet,&b1.inches);
    printf("enter the height of first box : ");
    scanf("%d%d",&b2.feet,&b2.inches);
    b3=box(b1,b2);
    printf("sum of box 1 and 2 is %d feet %d inches",b3.feet,b3.inches); 
    return 0;
}
struct height box (struct height b1,struct height b2)
{
    struct height t;
    t.feet = b1.feet+b2.feet;
    t.inches = b1.inches+b1.inches;
    if(t.inches>12)
    {
        t.inches-=12;
        t.feet=t.feet+1;
    }
    return t;
}
