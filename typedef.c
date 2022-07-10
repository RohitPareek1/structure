#include<stdio.h>
#include<stdio.h>
typedef struct height
{
    int feet;
    int inches;
}heights;
heights box(heights b1,heights b2);
int main()
{
    heights b1,b2,b3;
    system("cls");
    printf("enter the height of box b1 : ");
   scanf("%d%d",&b1.feet,&b1.inches);
    printf("enter the height of box b2 : ");
   scanf("%d%d",&b2.feet,&b2.inches);
   b3=box(b1,b2);
   printf("the height of the new box is %d feet %d inches",b3.feet,b3.inches);
   return 0;

}
heights box(heights b1,heights b2)
{
    heights temp;
    temp.feet=b1.feet+b2.feet;
    temp.inches=b2.inches+b2.inches;
    if(temp.inches>=12)
    {
        temp.inches-=12;
        temp.feet++;
    }
    return temp;
}