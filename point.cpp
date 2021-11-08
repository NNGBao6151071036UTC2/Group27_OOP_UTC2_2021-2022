#include "point.h"
#include "iostream"
#include "conio.h"
#include "windows.h"
#include "dos.h"
#include "time.h"
using namespace std;

Point::Point(){
			x = y = 10;
}
Point::Point(int x, int y){
			this -> x = x;
			this -> y = y;
}
void Point::SetPoint(int x, int y){
    this -> x = x;
    this -> y = y;
}
int Point::GetX(){
    return x;
}
int Point::GetY(){
    return y;
}
void Point::MoveUp(){
    y--;
    if( y < 0 )
        y = MAXFRAMEY;
}
void Point::MoveDown(){
    y++;
    if( y > MAXFRAMEY )
        y = 0;
}
void Point::MoveLeft(){
    x--;
    if( x < 0 )
        x = MAXFRAMEX;
}
void Point::MoveRight(){
    x++;
    if( x > MAXFRAMEX )
        x = 0;
}
void Point::Draw(char ch='O'){
    gotoxy(x,y);
    cout<<ch;
}
void Point::Erase(){
    gotoxy(x,y);
    cout<<" ";
}
void Point::CopyPos(Point * p){
    p->x = x;
    p->y = y;
}
int Point::IsEqual(Point * p){
    if( p->x == x && p->y ==y )
        return 1;
    return 0;
}
void Point::Debug(){
    cout<<"("<<x<<","<<y<<") ";
}
