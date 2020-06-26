#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main(){
    gotoxy(1,4);
    cout << "Hallo Mahasiswa";
    getch();
}