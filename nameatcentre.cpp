#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y){
	COORD coordinates ;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
   }

main(){
  system("cls");
  gotoxy(15,8) ;
  cout << " ******   " << endl;
  cout << "                *       " << endl;
  cout << "                *****   " << endl;
  cout << "                *       " << endl;
  cout << "                *       " << endl;
  cout << "                *       " << endl;

 gotoxy(26,8) ;
  cout << "    *     " << endl;
 gotoxy(26,9) ;
  cout << "   * *    " << endl;
 gotoxy(26,10) ;
  cout << "  * * *   " << endl;
 gotoxy(26,11) ;
  cout << " *     *  " << endl;
 gotoxy(26,12) ;
  cout << "*       * " << endl;
 gotoxy(26,13) ;
  cout << "          " << endl;

 gotoxy(37,8) ;
  cout << " *******  " << endl;
 gotoxy(37,9) ;
  cout << "    *     " << endl;
 gotoxy(37,10) ;
  cout << "    *     " << endl;
 gotoxy(37,11) ;
  cout << "    *     " << endl;
 gotoxy(37,12) ;
  cout << "    *     " << endl;
 gotoxy(37,13) ;
  cout << " *******  " << endl;

gotoxy(48,8) ;
  cout << " *******  " << endl;
gotoxy(48,9) ;
  cout << "       *  " << endl;
gotoxy(48,10) ;
  cout << "     *    " << endl;
gotoxy(48,11) ;
  cout << "    *     " << endl;
gotoxy(48,12) ;
  cout << "  *       " << endl;
gotoxy(48,13) ;
  cout << " *******  " << endl;

gotoxy(59,8) ;
  cout << "    *     " << endl;
gotoxy(59,9) ;
  cout << "   * *    " << endl;
gotoxy(59,10) ;
  cout << "  * * *   " << endl;
gotoxy(59,11) ;
  cout << " *     *  " << endl;
gotoxy(59,12) ;
  cout << "*       * " << endl;
gotoxy(59,13) ;
  cout << "          " << endl;


gotoxy(70,8) ;
  cout << "          " << endl;
gotoxy(70,9) ;
  cout << " *     *  " << endl;
gotoxy(70,10) ;
  cout << " * *   *  " << endl;
gotoxy(70,11) ;
  cout << " *   * *  " << endl;
gotoxy(70,12) ;
  cout << " *    **  " << endl;
gotoxy(70,13) ;
  cout << " *     *  " << endl;


}
