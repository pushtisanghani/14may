#include<stdio.h>
#include<conio.h>

void main()
{
    char ch='A';
    clrscr();
    do{
	printf("%c",ch);
	ch++;
      } while(ch<='Z');
   getch();
}
