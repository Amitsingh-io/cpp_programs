#include<stdio.h>
void main()
{
int x=80,y=5,x1=80,y1=20,i,j,c=0;
char n[137]="Unemployment is a terrible problem of our country.It is the mother of all problems and the deadliest of all other human problems";
char ch;

do{
clrscr();
for(j=0;j<=137;j++)
{x--; gotoxy(x,y);delay(250);
if(j>=78)
{  c++;x=2;y=5;
gotoxy(x,y);
}
for(i=c;i<=j;i++)
{
printf("%c",n[i]);
}//delay(150);
x1--;gotoxy(x1,y1);
if(j>=78){x1=2;y1=20;gotoxy(x1,y1);}
for(i=c;i<=j;i++)
{//printf("%c",n[i]);
}
}clrscr();
x=80,c=0;x1=80;y1=20;y=5;
}while(!kbhit());

}
