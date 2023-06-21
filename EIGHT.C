#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 printf("enter value a=");
 scanf("%d",&a);
 printf("enter value b=");
 scanf("%d",&b);
 c=b;
 b=a;
 a=c;
 printf("swapping value a=%d",a);
 printf("swapping value b=%d",b);
 getch();
}