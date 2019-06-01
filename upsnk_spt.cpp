/*gotoxy ¡¢Hidecursor definition printframe*/
#include<stdio.h> 
#include<windows.h>
#include<conio.h>
#include<time.h>
void prt_rctgl(int rowbg,int rowed,int linebg,int lined,char shape);//prt_rctgl() definition
void gotoxy(int x, int y)//gotoxy() definition
{
    COORD coord = {x, y};   
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void HideCursor()//Hidecursor definition
{
 CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
} 
void printframe()
{
 prt_rctgl(4,4,4,84,42);
 prt_rctgl(32,32,4,84,42);
 prt_rctgl(4,32,4,4,42);
 prt_rctgl(4,32,84,84,42); 
}
void prt_rctgl(int rowbg,int rowed,int linebg,int lined,char shape)//prt_rctgl() definition
{
	int row,line;
	for(row=rowbg;row<=rowed;row++)
	{
		for(line=linebg;line<=lined;line+=2)
		{
		gotoxy(line,row);
		putchar(shape);
	    }
    }
} 
int rdm(int begin,int end)//rdm() definition
{
	int rdm1;
	int amt=end-begin+1;
	srand((unsigned int)time(0));
	rdm1=rand()%amt+begin;
	return rdm1;
	
}
