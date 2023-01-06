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

system("cls") ;
cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    " << endl; 
cout << "     |                                                     |                     |    " << endl;
cout << "     |   |==========|   |      =====|                      |                     |    " << endl;
cout << "     |   |          |   |           |     ==============   |                     |    " << endl;
cout << "     |   |====|     |   |=======    |  ____________________|       |=======|     |    " << endl;
cout << "     |  ______|     |_______________|  |                                   |     |    " << endl;
cout << "     |  |                        ##    |         |==============|          |     |    " << endl;
cout << "     |  |  |================|    ##    |    _____|                  |      |     |    " << endl;
cout << "     |  |                                        |      |===========|      |     |    " << endl;
cout << "     |  |                  |================|           |   _______________|     |    " << endl;
cout << "     |  |============|     |____            |-----------|   |                    |    " << endl;
cout << "     |               |          |  =======  |               |                    |    " << endl;
cout << "     |        ===============   |           |      _________|    ========|       |    " << endl;
cout << "     |                                                                           |    " << endl;
cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    " << endl;

        int p ;
	p = 9 ;
	while(p < 30){ 
	        gotoxy(p,6);
	        cout << "P" ;
	        Sleep(200);
		gotoxy(p,6);
	        cout << " " ;
	        Sleep(100);
		p = p + 1 ;

gotoxy(0,20) ;
	
            }
}