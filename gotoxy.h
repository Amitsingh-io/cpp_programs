HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPostition;

void gotxy(short x, short y);
void gotoxy(short x, short y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
