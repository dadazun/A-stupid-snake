#include<stdio.h>
#include<time.h>//for srand()
#include<stdlib.h>//prototype for rand() srand()
#include<windows.h>//prototype for Sleep(),Hidecursor()
#include<conio.h>//for gotoxy(),getch(),kbhit()
#define ml 10000//max length
void gotoxy(int, int);//position_snake varible
void HideCursor();//hide cursor
void prt_rctgl(int rowbg,int rowed,int linebg,int lined,char shape);//print frame
extern int posx[ml],posy[ml];
extern unsigned score;
extern char drc;
extern int stx,sty;//position of star
int rdm(int a,int b);//return limited random number from a to b(a,b included)
void snake(void);
void star(void); 
void printframe(void); 
