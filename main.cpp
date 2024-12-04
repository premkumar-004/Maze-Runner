#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const int Width = 50;
const int Height = 30;

struct Position
{
    int x;
    int y;
};

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}