/*star and snake*/
#include<stdio.h>
#include<conio.h> 
#define ml 10000
int posx[ml]={10,10,10,10,10,10},posy[ml]={10,10,10,10,10,10} ;//position_snake,initiallization
unsigned score=5;//score and initial length of body
char drc='d';//direction&initiallization.a for left s for down d for right w for up
int stx,sty;//position of star
int rdm(int a,int b);//return limited random number from a to b(a,b included)
void gotoxy(int x, int y);//position_snake varible
void star(void)
{
if(posx[0]==stx&&posy[0]==sty)//star eaten
   {
   	bool overlap; 
   	score++;
   	do
 {
 overlap=0;	
 stx=2*rdm(3,41);
 sty=rdm(5,30);//random star position 
 for(unsigned count3=0;count3<=score;count3++)
 {
  if(stx==posx[count3]&&sty==posy[count3])//avoid overlap
  {
   overlap=1;
   break;
   }
  }
 }
 while(overlap);
   }
   	gotoxy(stx,sty);
    printf("бя");//print a star
}
void snake(void)
{ 
   if(posx[0]<=4||posx[0]>=84||posy[0]<=4||posy[0]>=32)
   drc=0;//touch frame,game over
   while(kbhit())//available key hit.No getch() because it requires input everytime
   {
    char mid=getch();
	switch(mid)//change direction
	{
	case'a':
	if(drc!='d')//no backward
		drc='a';
		break;
	case's':
	if(drc!='w')
		drc='s';
		break;
	case'd':
	if(drc!='a')
		drc='d';
		break;
	case'w':
	if(drc!='s')
		drc='w';
		break;	
	}
	}
	for(unsigned count1=score;count1>=1;count1--)//retain position stastics
 	{
	posx[count1]=posx[count1-1];
   	posy[count1]=posy[count1-1];
    }
	switch(drc)//change position
	{
	case'a': posx [0]-=2; break;
	case's': posy [0]++; break;
	case'd': posx [0]+=2; break;
	case'w': posy [0]--; break;
    }
   for(unsigned count=0;count<=score;count++)
   {
	gotoxy(posx[count] ,posy[count] );
	printf("бЎ");//shape of snake
    }
    for(unsigned count2=1;count2<=score;count2++)//snake biten
	{
		if(posx [0]==posx[count2]&&posy[0]==posy[count2])
		drc=0;//gameover
	}
}
