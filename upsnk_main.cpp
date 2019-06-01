#include"upsnk.h" 
int main(void)
{
	HideCursor();
	stx=2*rdm(3,41);
    sty=rdm(5,31);//random star position for initialization
	while(drc!=0)//gameover if drc equals 0
	{
	printframe();
    star();
	snake();
	Sleep(100);//speed
	system("cls");//clear screen	
    HideCursor();
    gotoxy(90,35);
    printf("SCORE:%d\n%100s\n%100s\n%100s\n%100s",score-5,
	"a for left ","s for down ","d for right","w for up   ");
    }  
	return 0; 
}
