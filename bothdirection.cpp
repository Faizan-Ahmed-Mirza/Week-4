#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y){
	COORD coordinates ;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
   }
void movex(int p , int v){
	gotoxy(p,v);
        cout << "P" ;
	Sleep(200);
	gotoxy(p,v);
	cout << " " ;
	Sleep(100);
	p = p+1 ;
 }

void movey(int p , int v){
	gotoxy(p,v);
        cout << "P" ;
	Sleep(200);
	gotoxy(p,v);
	cout << " " ;
	Sleep(100);
	v = v + 1 ;
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
	int v = 6;
	while(p < 31){ 
	        movex(p , v) ;
		p = p +1 ;
		if(p == 30){
			while(v < 9){
				movey(p,v);
				v = v+1 ; }
                
		       }
			
    }
gotoxy(0,20) ; 
	
}