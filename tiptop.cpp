#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#include"gotoxy.h"


 using namespace std;
/*HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPostition;
void res(char *p1n,char *p2n, int resp1,int resp2);

void gotxy(short x, short y);
void gotoxy(short x, short y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}*/
//void gotoxy(int x,int y);
 
void res(char *p1n,char *p2n, int resp1,int resp2 )
{
gotoxy(35,5);	cout<<p1n<<"\t"<<resp1;gotoxy(55,5);cout<<p2n<<"\t"<<resp2;gotoxy(15,14);
}

main()
{ 	int co=0,resp1=0,resp2=0,rest=0,check=0,rcheck=0;
	char p1n[20],p2n[20];int p1d=0;
	//char ch;
	int st=0,prvche=0;
	amit:
	int a,x=10,y=3,c=0;
	int id1=0,id2=0,id3=0,id4=0,id5=0,id6=0,id7=0,id8=0,id9=0;
	int rx1=0,rx2=0,rx3=0,rx4=0,rx5=0,rx6=0,rx7=0,rx8=0,rx9=0;
	int ro1=0,ro2=0,ro3=0,ro4=0,ro5=0,ro6=0,ro7=0,ro8=0,ro9=0;
	
 system("cls");if(co!=1)
 {
 
cout<<"\t Welcome to Tip Top Toe Game(press any key to continue)\n";
getch();
cout<<"\nGame Instructions:-\n";cout<<"\n-> Use Arrow key to move one index to another index";
cout<<"\n\n-> You can use only 'X' and 'O' charcter to play game.";
cout<<"\n\n-> Only 2 players can play";

cout<<"\n\n-> Starting time player-1 have chance to play first but \n   second time player-2 have chance to play first\nNote:- DICE WILL BE SAME";
cout<<"\n\n-> If you want to EXIT press esc";
cout<<"\n\n-> Press any key to continue.....";getch();system("cls");

 
cout<<"Plz.. Enter 1st player name...";cin>>p1n;
cout<<"Plz.. Enter 2nd Player name..."; cin>>p2n;singh:system("cls");

cout<<"\n"<<p1n<<" Choose your dice..\n";
cout<<"Press 1 to Choose 'x'\nElse Press 2 to Choose 'o'\n"; cin>>p1d; if(p1d!=1&&p1d!=2){ cout<<"Wrong choice\nChoose 1 or 2";getch(); goto singh;}
cout<<"\n"<<p1n<<" you choose ";if(p1d==1){ check=1; prvche=1;cout<<" X ";} else { prvche=0;st=1;check=0;cout<<" O ";} 
cout<<"\n\n"<<p2n<<" your dice is ";if(p1d==1){cout<<" O";} else { cout<<" X";}
cout<<"\n\n\t\t\tLet's Start Game..";
 
 int r,q;
 gotoxy(36,12);
    printf("loading...");
    gotoxy(30,14);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++);//to display the character slowly
    //delay(500);
	printf("%c",177);
} getch();} system("cls");
gotoxy(35,3);cout<<"Score:-";
//cout<<p1n; gotoxy(42,5);cout<<resp1;gotoxy(55,5);cout<<p2n;gotoxy(62,5);cout<<resp2;
 res(&p1n[0],&p2n[0],resp1,resp2);
 gotoxy(3,0);	cout<<"\n\n\t    |    |\n\t    |    |\n\t____|____|____\n\t    |    |\n\t    |    |\n\t____|____|____\n\t    |    |\n\t    |    |\n\t    |    |\n\t";

//gotoxy(1,12);
//cout<<"\n\n"<<p1n<<" you choose ";if(p1d==);
/*gotoxy(10,3);cout<<"x";gotoxy(14,3);cout<<"y";gotoxy(20,3);cout<<"z";
gotoxy(10,6);cout<<"x";gotoxy(14,6);cout<<"y";gotoxy(20,6);cout<<"z";
gotoxy(10,9);cout<<"x";gotoxy(14,9);cout<<"y";gotoxy(20,9);cout<<"z";getch();*/

gotoxy(x,y);
do{
//kbhit();
a=getch(); 
 if(a==72&&y!=3)
{
	y=y-3;
	gotoxy(x,y);
}
else if(a==75&&x!=10)
{x=x-5;gotoxy(x,y);
}
else if(a==77&&x!=20)
{ x=x+5;gotoxy(x,y);
}
else if(a==80&&y!=9)
{ y=y+3;gotoxy(x,y);
}
else if(a==111||a==79)
{
	gotoxy(x,y);if(check==0){
	printf("%c",a);rcheck=1;} //if(check==0){check=1;}//else {check=1;}
}
else if(a==120||a==88)
{
	gotoxy(x,y);if(check==1){ st=1;printf("%c",a); rcheck=0;}//if(check==1){check=0;}//else {check=1;}
}
if((x==10&&y==3)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx1=1;id1=1;}} else {if(check==0) {ro1=1;id1=1;} }
}
else if((x==15&&y==3)&&(a==120||a==88||a==111||a==79))
{ 
if(a==120||a==88){ if(check==1){rx2=1;id2=1;}} else {if(check==0) {ro2=1;id2=1;} }
}
else if((x==20&&y==3)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx3=1;id3=1;}} else {if(check==0) {ro3=1;id3=1;} }
}
else if((x==10&&y==6)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx4=1;id4=1;}} else {if(check==0) {ro4=1;id4=1;} }
}
else if((x==15&&y==6)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){if(check==1){rx5=1;id5=1;}} else { if(check==0) {ro5=1;id5=1;}}
}
else if((x==20&&y==6)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx6=1;id6=1;}} else {if(check==0) {ro6=1;id6=1;} }
}
else if((x==10&&y==9)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx7=1;id7=1;}} else {if(check==0) {ro7=1;id7=1;} }
}
else if((x==15&&y==9)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx8=1; id8=1;}} else {if(check==0) {ro8=1; id8=1;} }
}
else if((x==20&&y==9)&&(a==120||a==88||a==111||a==79))
{
if(a==120||a==88){ if(check==1){rx9=1; id9=1;}} else {if(check==0) {ro9=1;id9=1;} }
} 
c=id1+id2+id3+id4+id5+id6+id7+id8+id9; co=0; if(st==1){check=rcheck;}

if((rx1==1&&rx4==1&&rx7==1)||(rx2==1&&rx5==1&&rx8==1)||(rx3==1&&rx6==1&&rx9==1)||(rx1==1&&rx2==1&&rx3==1)||(rx4==1&&rx5==1&&rx6==1)||(rx7==1&&rx8==1&&rx9==1)||(rx3==1&&rx5==1&&rx7==1)||(rx1==1&&rx5==1&&rx9==1))
{
gotoxy(15,12);//resx++;
 if(p1d==1){
 cout<<p1n<<" is winner"; resp1++;}else{ cout<<p2n<<"  is winner";resp2++;}
res(&p1n[0],&p2n[0],resp1,resp2);
  cout<<"\n\n\t To Continue Press '1'.... \n\t Else press any key....";cin>>co;
if(co==1){ if(prvche==1){ rcheck=0; check=0; prvche=0;}else { rcheck=1; check=1; prvche=1;}
goto amit;
} else{goto brk;
}
}
else if((ro1==1&&ro4==1&&ro7==1)||(ro2==1&&ro5==1&&ro8==1)||(ro3==1&&ro6==1&&ro9==1)||(ro1==1&&ro2==1&&ro3==1)||(ro4==1&&ro5==1&&ro6==1)||(ro7==1&&ro8==1&&ro9==1)||(ro3==1&&ro5==1&&ro7==1)||(ro1==1&&ro5==1&&ro9==1))
{gotoxy(15,12);
if(p1d==2){
 cout<<p1n<<" is winner";resp1++;}else{ cout<<p2n<<"  is winner";resp2++;} res(&p1n[0],&p2n[0],resp1,resp2);
cout<<"\t To Continue Press '1'.... \n\t Else press any key....";cin>>co;
if(co==1){ if(prvche==1){rcheck=0; check=0; prvche=0;}else { rcheck=1; check=1; prvche=1;} goto amit; //reso++;
} else {goto brk;
}
}
else if(c==9){ rest++; gotoxy(15,12);cout<<"Match Drawn \n\n\t To Continue Press '1'.... \n\t Else press any key....";cin>>co;
if(co==1){ if(prvche==1){rcheck=0; check=0; prvche=0;}else { rcheck=1; check=1; prvche=1;} goto amit;
}goto brk;
}
//cout<<a<<" ";
}while(a!=27);
//getch();
brk:
int i;
FILE *pinfo;

pinfo=fopen("tiprecord.txt","a+");
fprintf(pinfo,"Players Name :\tScore :\n\t%s\t\t%d\n\t%s\t\t%d\n",p1n,resp1,p2n,resp2);
time_t mytime;
mytime=time(NULL);
fprintf(pinfo,"Played Date: %s",ctime(&mytime));
for(i=0;i<=50;i++)
fprintf(pinfo,"%c",'_');
fprintf(pinfo,"\n");
fclose(pinfo);
int ps; char cz;

system("cls");
printf("Wanna see past records Press 1\n");
scanf("%d",&ps);
if(ps==1)
{
	pinfo=fopen("tiprecord.txt","r");
	do{cz=getc(pinfo);
		putchar(cz);
	}while(cz!=EOF);
}fclose(pinfo);
getch();
}




