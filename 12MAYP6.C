#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
     int i,n,fact=1;
     printf("enter number :");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
      fact=fact*i;
      printf("\n fact=%d",fact);
     }
  getch();
}
