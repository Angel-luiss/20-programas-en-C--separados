#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h> 


 void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 int main(){  
 int x=20 , y=20;

	  char cursor;
	  while(cursor!=27)
	  {
	  	cursor=getch();
	  	if(cursor=='a')
	  	x--;
	  	if(cursor=='d')x++;
	  	
	  	if(cursor=='w')y--;
	  	if(cursor=='s')y++;
	  	
	  	system("cls");
	  	gotoxy(x,y);    
    	printf(".");  
    
	  }
      
      return 0;  
} 
