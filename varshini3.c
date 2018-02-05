#include<stdio.h>
#include<conio.h>
voidmain()
{
inta=10;
intb=20;
printf("enter the value a");
scanf("%d",& a);
printf("enter the value b");
scanf("%d",& b);
printf("swapping the values");
a=a+b;
b=a-b;
a=a-b;
printf("\n after swap s=%d b=%d (a,b)
getch();
}
