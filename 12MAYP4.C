#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int i=0,n,f,l;
    printf("enter the number :");
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {
     n=n/10;
    }
    f=n;
    i=f+l;
    printf("first and last no.=%d",i);
  getch();
}